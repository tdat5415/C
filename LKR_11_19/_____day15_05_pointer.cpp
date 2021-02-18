#include<stdio.h>
#include<Windows.h>

void login(int* acc_arr, int* pw_arr, int* log_p, int* my_ind);
void toss(int* acc_arr, int *bal_arr, int* my_ind_p);
void check(int*acc_arr, int* bal_arr, int* my_ind_p);


void main() {
	int acc[3] = { 1111, 2222, 3333 };
	int pw[3] = { 1234, 2345, 3456 };
	int bal[3] = { 5000, 6000, 7000 };

	int my_ind;
	int log = 0;

	int run = 1;
	while (run) {
		printf("\n");
		if (log) {
			printf("1. 로그아웃\n");
			printf("2. 송금\n");
			printf("3. 조회\n");
		}
		else printf("1. 로그인\n");
		printf("4. 종료\n");

		printf("입력하세요 : ");
		int sel;
		scanf_s("%d", &sel);

		if (sel ==1) login(acc, pw, &log, &my_ind);
		else if (sel == 2 && log) toss(acc, bal, &my_ind);
		else if (sel == 3 && log) check(acc, bal, &my_ind);
		else if (sel == 4) run =0;
		else {
			system("cls");
			printf("잘못입력하였습니다.\n");
		}
	}



	printf("\n");
	system("pause");
}

void login(int* acc_arr, int* pw_arr, int* log_p, int* my_ind_p) {
	if (*log_p) {
		*log_p = 0; //로그아웃
		*my_ind_p = -1; //본인인덱스초기화
		system("cls");
		printf("로그아웃되었습니다.\n");
	}
	else {
		system("cls");
		printf("계좌를 입력하세요 : ");
		int input;
		scanf_s("%d", &input);

		int ind = -1;
		for (int i = 0; i < 3; i++) {//계좌찾기
			if (input == acc_arr[i]) ind = i;
		}
		if (ind == -1) {//계좌없음
			system("cls");
			printf("계좌가 없습니다.\n");
		}
		else {//계좌있음
			printf("비밀번호를 입력하세요 : ");
			int input;
			scanf_s("%d", &input);
			if (input == pw_arr[ind]) {//비번일치
				*log_p = 1; //로그인
				*my_ind_p = ind; //본인인덱스
				system("cls");
				printf("로그인되었습니다.\n");
			}
			else {//비번불일치 
				system("cls");
				printf("비밀번호가 틀렸습니다.\n");
			}
		}
	}
}

void toss(int* acc_arr, int* bal_arr, int* my_ind_p) {
	system("cls");
	printf("보낼 계좌를 입력하세요 : ");
	int input;
	scanf_s("%d", &input);

	int ind = -1;
	for (int i = 0; i < 3; i++) {
		if (input == acc_arr[i]) ind = i;
	}
	if (ind == -1) {//계좌없음
		system("cls");
		printf("보낼 계좌가 없습니다.\n");
	}
	else {//계좌있음
		printf("보낼 금액을 입력하시오 : ");
		int input;
		scanf_s("%d", &input);
		if (input > bal_arr[*my_ind_p] || 0 <bal_arr[*my_ind_p]) {//부족
			system("cls");
			printf("돈이 없습니다.\n");
		}
		else {//보냄
			bal_arr[*my_ind_p] -= input;
			bal_arr[ind] += input;
			system("cls");
			printf("%d 으로 %d 원을 보냈습니다.\n", acc_arr[ind], input);
		}
	}
}

void check(int* acc_arr, int* bal_arr, int* my_ind_p) {
	system("cls");
	printf("본인 계좌번호 : %d\n", acc_arr[*my_ind_p]);
	printf("현재 잔액 : %d\n", bal_arr[*my_ind_p]);
}
