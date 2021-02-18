#include<stdio.h>
#include<Windows.h>
#include<string.h>


//구조체 (struct) : 사용자 정의자료형
//1) 내장 자료형 : int, double, char, float, long long
//2) 사용자정의 자료형 : 직접만든다 (내장자료형을 조합해서 만든다)
//사용자 정의 자료형
//1. 정의 : 설계도
// 1) struct  : 키워드
// 2) student  : 내가 만든 자료형 이름
// 3) {};   : 자료형 내용
//2. 선언 : 메모리 할당
//3. 사용 : 변수명.(dot) 을 이용해서 사용한다.

struct USER{
	char*name;
	char*acc;
	char*pw;
	int bal;
};

/*
struct USER{
const char*name;
const char*acc;
const char*pw;
int bal;
};
*/

void joindrop(int*p_log, USER**p_user, int*p_count, int*p_my_ind);//f_1.
	void join(USER**p_user, int*p_count);//f_1_1.
	void drop(int*p_log, USER**p_user, int*p_count, int*p_my_ind);//f_1_2.
void loginout(int*p_log, int*p_my_ind, int*p_count, USER*user);//f_2.
	void login(int*p_log, int*p_my_ind, int*p_count, USER*user);//f_2_1.
	void logout(int*p_log, int*p_my_ind);//f_2_2.
void toss(int*p_count, USER*user, int*p_my_ind);//f_3.
void check(int*p_my_ind, USER*user);//f_4.
void init_user(USER*user);//f_5.
int sel_prt(int*log);//f_6.


void main(){
	USER*user =new USER[3];//3명

	/*
	strcpy_s(user[0].name, 100, "tdat");
	strcpy_s(user[0].acc, 100, "975-004321-01-019");
	strcpy_s(user[0].pw, 100, "q1w2e3r4");
	user[0].bal =50000;
	strcpy_s(user[1].name, 100, "tdat12");
	strcpy_s(user[1].acc, 100, "1234-1234");
	strcpy_s(user[1].pw, 100, "1234");
	user[1].bal =40000;

	strcpy_s(user[2].name, 100, "tdat34");
	strcpy_s(user[2].acc, 100, "5678-5678");
	strcpy_s(user[2].pw, 100, "5678");
	user[2].bal =30000;
	*/
	/*
	user[0].name ="tdat0";
	user[0].acc ="1234-1234";
	user[0].pw ="qwer";
	user[0].bal =50000;
	user[1].name ="tdat1";
	user[1].acc ="2345-2345";
	user[1].pw ="wert";
	user[1].bal =60000;
	user[2].name ="tdat2";
	user[2].acc ="3456-3456";
	user[2].pw ="erty";
	user[2].bal =70000;
	*/

	init_user(user);

	int count =3;
	int run =1;
	int log =0;
	int my_ind =-1;

	while(run){
		for(int i =0; i <count; i++) printf("%d : %s\n", i, user[i].acc);
		printf("\n");

		int sel;
		sel =sel_prt(&log);

		if(sel ==0) joindrop(&log, &user, &count, &my_ind);
		else if(sel ==1) loginout(&log, &my_ind, &count, user);
		else if(sel ==2 && log) toss(&count, user, &my_ind);
		else if(sel ==3 && log) check(&my_ind, user);
		else if(sel ==4) run =0;
		printf("\n");
	}

	printf("\n");
}
//f_1.
void joindrop(int*p_log, USER**p_user, int*p_count, int*p_my_ind){
	if((*p_log) && (*p_count) >0) drop(p_log, p_user, p_count, p_my_ind);
	else join(p_user, p_count);
}
//f_1_1.
void join(USER**p_user, int*p_count){
	USER inp;
	char temp[100];
	int len;

	printf("이름을 입력하시오 : ");
	scanf_s("%s", temp, 100);
	len =strlen(temp);
	inp.name =new char[len +1];
	strcpy_s(inp.name, len +1, temp);

	printf("계좌를 입력하시오 : ");
	scanf_s("%s", temp, 100);
	len =strlen(temp);
	inp.acc =new char[len +1];
	strcpy_s(inp.acc, len +1, temp);

	printf("비번을 입력하시오 : ");
	scanf_s("%s", temp, 100);
	len =strlen(temp);
	inp.pw =new char[len +1];
	strcpy_s(inp.pw, len +1, temp);

	inp.bal =0;

	USER *TEMP =(*p_user);
	*p_user =new USER[(*p_count) +1];
	for(int i =0; i <(*p_count); i++){
		(*p_user)[i].name =TEMP[i].name;
		(*p_user)[i].acc =TEMP[i].acc;
		(*p_user)[i].pw =TEMP[i].pw;
		(*p_user)[i].bal =TEMP[i].bal;
	}
	//user 에서 다시 쓸 것이기 때문에 이름들어가는 배열 없애면 안됨
	//하위 변수는 안지워지는것이 이걸로 증명됨
	delete TEMP;

	(*p_user)[(*p_count)].name =inp.name;//inp에서 만든 배열 그대로 가져옴
	(*p_user)[(*p_count)].acc =inp.acc;
	(*p_user)[(*p_count)].pw =inp.pw;
	(*p_user)[(*p_count)].bal =inp.bal;

	(*p_count)++;
	system("cls");
	printf("가입되었습니다.\n");
}
//f_1_2.
void drop(int*p_log, USER**p_user, int*p_count, int*p_my_ind){
	USER *temp =(*p_user);
	(*p_user) =new USER[(*p_count) -1];//주소변수를 가져와서 그 변수에 할당
	for(int i =0; i <(*p_my_ind); i++){
		(*p_user)[i].name =temp[i].name;
		(*p_user)[i].acc =temp[i].acc;
		(*p_user)[i].pw =temp[i].pw;
		(*p_user)[i].bal =temp[i].bal;
	}
	for(int i =*p_my_ind +1; i <*p_count; i++){
		(*p_user)[i -1].name =temp[i].name;
		(*p_user)[i -1].acc =temp[i].acc;
		(*p_user)[i -1].pw =temp[i].pw;
		(*p_user)[i -1].bal =temp[i].bal;
	}
	delete temp[(*p_my_ind)].name;
	delete temp[(*p_my_ind)].acc;
	delete temp[(*p_my_ind)].pw;
	delete temp;

	(*p_my_ind) =-1;
	(*p_log) =0;
	(*p_count)--;
	system("cls");
	printf("탈퇴되었습니다.\n");
}
//f_2.
void loginout(int*p_log, int*p_my_ind, int*p_count, USER*user){
	if(*p_log) logout(p_log, p_my_ind);
	else login(p_log, p_my_ind, p_count, user);
}
//f_2_1
void login(int*p_log, int*p_my_ind, int*p_count, USER*user){
	printf("계좌번호를 입력하시오 : ");
	char inp_acc[100];
	scanf_s("%s", inp_acc, 100);

	int ind =-1;
	for(int i =0; i <*p_count; i++) if(strcmp(inp_acc, user[i].acc) == 0) ind =i;
	if(ind ==-1){
		system("cls");
		printf("일치하는 계좌번호가 없습니다.\n");
	}
	else{
		printf("비밀번호를 입력하시오 : ");
		char inp_pw[100];
		scanf_s("%s", inp_pw, 100);

		if(strcmp(inp_pw, user[ind].pw) ==0){
			system("cls");
			printf("로그인 되었습니다.\n");
			*p_log =1;
			*p_my_ind =ind;
		}
		else{
			system("cls");
			printf("비밀번호가 일치하지 않습니다.\n");
		}
	}
}
//f_2_2.
void logout(int*p_log, int*p_my_ind){
	system("cls");
	printf("로그아웃되었습니다.\n");
	*p_log =0;
	*p_my_ind =-1;
}
//f_3.
void toss(int*p_count, USER*user, int*p_my_ind){
	printf("상대방 계좌를 입력하시오 : ");
	char inp_acc[100];
	scanf_s("%s", inp_acc, 100);

	int ind =-1;
	for(int i =0; i <*p_count; i++){
		if(strcmp(inp_acc, user[i].acc) ==0) ind =i;
	}
	if(ind ==-1){
		system("cls");
		printf("일치하는 계좌번호가 없습니다.\n");
	}
	else{
		printf("보낼 금액을 입력하시오. : ");
		int inp_bal;
		scanf_s("%d", &inp_bal);

		if(inp_bal <=0 || user[*p_my_ind].bal <inp_bal){
			system("cls");
			printf("잘못된 금액이거나 잔액이 모자릅니다.\n");
		}
		else{
			user[*p_my_ind].bal -=inp_bal;
			user[ind].bal +=inp_bal;
			system("cls");
			printf("송금되었습니다.\n");
		}
	}
}
//f_4.
void check(int*p_my_ind, USER*user){
	system("cls");
	printf("계좌주 : %s\n", user[*p_my_ind].name);
	printf("계좌번호 : %s\n", user[*p_my_ind].acc);
	printf("현재잔액 : %d\n", user[*p_my_ind].bal);
}
//f_5.
void init_user(USER*user){
	char temp[3][3][100] ={
		{"tdat0", "1234-1234", "qwer"},
		{"tdat1", "2345-2345", "wert"},
		{"tdat2", "3456-3456", "erty"},
	};
	int len;
	len = strlen(temp[0][0]);
	user[0].name = new char[len + 1];
	strcpy_s(user[0].name, len + 1, temp[0][0]);
	len = strlen(temp[0][1]);
	user[0].acc = new char[len + 1];
	strcpy_s(user[0].acc, len + 1, temp[0][1]);
	len = strlen(temp[0][2]);
	user[0].pw = new char[len + 1];
	strcpy_s(user[0].pw, len + 1, temp[0][2]);
	user[0].bal = 50000;

	len = strlen(temp[1][0]);
	user[1].name = new char[len + 1];
	strcpy_s(user[1].name, len + 1, temp[1][0]);
	len = strlen(temp[1][1]);
	user[1].acc = new char[len + 1];
	strcpy_s(user[1].acc, len + 1, temp[1][1]);
	len = strlen(temp[1][2]);
	user[1].pw = new char[len + 1];
	strcpy_s(user[1].pw, len + 1, temp[1][2]);
	user[1].bal = 60000;

	len = strlen(temp[2][0]);
	user[2].name = new char[len + 1];
	len = strlen(temp[2][1]);
	user[2].acc = new char[len + 1];
	strcpy_s(user[2].acc, len + 1, temp[2][1]);
	len = strlen(temp[2][2]);
	user[2].pw = new char[len + 1];
	strcpy_s(user[2].pw, len + 1, temp[2][2]);
	user[2].bal = 70000;
}
//f_6.
int sel_prt(int*log){
	if(*log){
		printf("0. 회원탈퇴\n");
		printf("1. 로그아웃\n");
		printf("2. 송금\n");
		printf("3. 조회\n");
	}
	else{
		printf("0. 회원가입\n");
		printf("1. 로그인\n");
	}
	printf("4. 종료\n");

	printf("입력하시오 : ");

	int sel;
	scanf_s("%d", &sel);
	return sel;
}