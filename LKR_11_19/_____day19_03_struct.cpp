#include<stdio.h>
#include<Windows.h>
#include<string.h>


//����ü (struct) : ����� �����ڷ���
//1) ���� �ڷ��� : int, double, char, float, long long
//2) ��������� �ڷ��� : ��������� (�����ڷ����� �����ؼ� �����)
//����� ���� �ڷ���
//1. ���� : ���赵
// 1) struct  : Ű����
// 2) student  : ���� ���� �ڷ��� �̸�
// 3) {};   : �ڷ��� ����
//2. ���� : �޸� �Ҵ�
//3. ��� : ������.(dot) �� �̿��ؼ� ����Ѵ�.

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
	USER*user =new USER[3];//3��

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

	printf("�̸��� �Է��Ͻÿ� : ");
	scanf_s("%s", temp, 100);
	len =strlen(temp);
	inp.name =new char[len +1];
	strcpy_s(inp.name, len +1, temp);

	printf("���¸� �Է��Ͻÿ� : ");
	scanf_s("%s", temp, 100);
	len =strlen(temp);
	inp.acc =new char[len +1];
	strcpy_s(inp.acc, len +1, temp);

	printf("����� �Է��Ͻÿ� : ");
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
	//user ���� �ٽ� �� ���̱� ������ �̸����� �迭 ���ָ� �ȵ�
	//���� ������ ���������°��� �̰ɷ� �����
	delete TEMP;

	(*p_user)[(*p_count)].name =inp.name;//inp���� ���� �迭 �״�� ������
	(*p_user)[(*p_count)].acc =inp.acc;
	(*p_user)[(*p_count)].pw =inp.pw;
	(*p_user)[(*p_count)].bal =inp.bal;

	(*p_count)++;
	system("cls");
	printf("���ԵǾ����ϴ�.\n");
}
//f_1_2.
void drop(int*p_log, USER**p_user, int*p_count, int*p_my_ind){
	USER *temp =(*p_user);
	(*p_user) =new USER[(*p_count) -1];//�ּҺ����� �����ͼ� �� ������ �Ҵ�
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
	printf("Ż��Ǿ����ϴ�.\n");
}
//f_2.
void loginout(int*p_log, int*p_my_ind, int*p_count, USER*user){
	if(*p_log) logout(p_log, p_my_ind);
	else login(p_log, p_my_ind, p_count, user);
}
//f_2_1
void login(int*p_log, int*p_my_ind, int*p_count, USER*user){
	printf("���¹�ȣ�� �Է��Ͻÿ� : ");
	char inp_acc[100];
	scanf_s("%s", inp_acc, 100);

	int ind =-1;
	for(int i =0; i <*p_count; i++) if(strcmp(inp_acc, user[i].acc) == 0) ind =i;
	if(ind ==-1){
		system("cls");
		printf("��ġ�ϴ� ���¹�ȣ�� �����ϴ�.\n");
	}
	else{
		printf("��й�ȣ�� �Է��Ͻÿ� : ");
		char inp_pw[100];
		scanf_s("%s", inp_pw, 100);

		if(strcmp(inp_pw, user[ind].pw) ==0){
			system("cls");
			printf("�α��� �Ǿ����ϴ�.\n");
			*p_log =1;
			*p_my_ind =ind;
		}
		else{
			system("cls");
			printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n");
		}
	}
}
//f_2_2.
void logout(int*p_log, int*p_my_ind){
	system("cls");
	printf("�α׾ƿ��Ǿ����ϴ�.\n");
	*p_log =0;
	*p_my_ind =-1;
}
//f_3.
void toss(int*p_count, USER*user, int*p_my_ind){
	printf("���� ���¸� �Է��Ͻÿ� : ");
	char inp_acc[100];
	scanf_s("%s", inp_acc, 100);

	int ind =-1;
	for(int i =0; i <*p_count; i++){
		if(strcmp(inp_acc, user[i].acc) ==0) ind =i;
	}
	if(ind ==-1){
		system("cls");
		printf("��ġ�ϴ� ���¹�ȣ�� �����ϴ�.\n");
	}
	else{
		printf("���� �ݾ��� �Է��Ͻÿ�. : ");
		int inp_bal;
		scanf_s("%d", &inp_bal);

		if(inp_bal <=0 || user[*p_my_ind].bal <inp_bal){
			system("cls");
			printf("�߸��� �ݾ��̰ų� �ܾ��� ���ڸ��ϴ�.\n");
		}
		else{
			user[*p_my_ind].bal -=inp_bal;
			user[ind].bal +=inp_bal;
			system("cls");
			printf("�۱ݵǾ����ϴ�.\n");
		}
	}
}
//f_4.
void check(int*p_my_ind, USER*user){
	system("cls");
	printf("������ : %s\n", user[*p_my_ind].name);
	printf("���¹�ȣ : %s\n", user[*p_my_ind].acc);
	printf("�����ܾ� : %d\n", user[*p_my_ind].bal);
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
		printf("0. ȸ��Ż��\n");
		printf("1. �α׾ƿ�\n");
		printf("2. �۱�\n");
		printf("3. ��ȸ\n");
	}
	else{
		printf("0. ȸ������\n");
		printf("1. �α���\n");
	}
	printf("4. ����\n");

	printf("�Է��Ͻÿ� : ");

	int sel;
	scanf_s("%d", &sel);
	return sel;
}