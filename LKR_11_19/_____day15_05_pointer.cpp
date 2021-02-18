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
			printf("1. �α׾ƿ�\n");
			printf("2. �۱�\n");
			printf("3. ��ȸ\n");
		}
		else printf("1. �α���\n");
		printf("4. ����\n");

		printf("�Է��ϼ��� : ");
		int sel;
		scanf_s("%d", &sel);

		if (sel ==1) login(acc, pw, &log, &my_ind);
		else if (sel == 2 && log) toss(acc, bal, &my_ind);
		else if (sel == 3 && log) check(acc, bal, &my_ind);
		else if (sel == 4) run =0;
		else {
			system("cls");
			printf("�߸��Է��Ͽ����ϴ�.\n");
		}
	}



	printf("\n");
	system("pause");
}

void login(int* acc_arr, int* pw_arr, int* log_p, int* my_ind_p) {
	if (*log_p) {
		*log_p = 0; //�α׾ƿ�
		*my_ind_p = -1; //�����ε����ʱ�ȭ
		system("cls");
		printf("�α׾ƿ��Ǿ����ϴ�.\n");
	}
	else {
		system("cls");
		printf("���¸� �Է��ϼ��� : ");
		int input;
		scanf_s("%d", &input);

		int ind = -1;
		for (int i = 0; i < 3; i++) {//����ã��
			if (input == acc_arr[i]) ind = i;
		}
		if (ind == -1) {//���¾���
			system("cls");
			printf("���°� �����ϴ�.\n");
		}
		else {//��������
			printf("��й�ȣ�� �Է��ϼ��� : ");
			int input;
			scanf_s("%d", &input);
			if (input == pw_arr[ind]) {//�����ġ
				*log_p = 1; //�α���
				*my_ind_p = ind; //�����ε���
				system("cls");
				printf("�α��εǾ����ϴ�.\n");
			}
			else {//�������ġ 
				system("cls");
				printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
			}
		}
	}
}

void toss(int* acc_arr, int* bal_arr, int* my_ind_p) {
	system("cls");
	printf("���� ���¸� �Է��ϼ��� : ");
	int input;
	scanf_s("%d", &input);

	int ind = -1;
	for (int i = 0; i < 3; i++) {
		if (input == acc_arr[i]) ind = i;
	}
	if (ind == -1) {//���¾���
		system("cls");
		printf("���� ���°� �����ϴ�.\n");
	}
	else {//��������
		printf("���� �ݾ��� �Է��Ͻÿ� : ");
		int input;
		scanf_s("%d", &input);
		if (input > bal_arr[*my_ind_p] || 0 <bal_arr[*my_ind_p]) {//����
			system("cls");
			printf("���� �����ϴ�.\n");
		}
		else {//����
			bal_arr[*my_ind_p] -= input;
			bal_arr[ind] += input;
			system("cls");
			printf("%d ���� %d ���� ���½��ϴ�.\n", acc_arr[ind], input);
		}
	}
}

void check(int* acc_arr, int* bal_arr, int* my_ind_p) {
	system("cls");
	printf("���� ���¹�ȣ : %d\n", acc_arr[*my_ind_p]);
	printf("���� �ܾ� : %d\n", bal_arr[*my_ind_p]);
}
