#include<stdio.h>
#include<Windows.h>
#include<string.h>


//����ü (struct) : ����� �����ڷ���
//1) ���� �ڷ��� : int, double, char, float, long long
//2) ��������� �ڷ��� : ��������� (�����ڷ����� �����ؼ� �����)
//����� ���� �ڷ���
//1. ���� : ���赵
//	1) struct	 : Ű����
//	2) student	 : ���� ���� �ڷ��� �̸�
//	3) {};		 : �ڷ��� ����
//2. ���� : �޸� �Ҵ�
//3. ��� : ������.(dot) �� �̿��ؼ� ����Ѵ�.

struct User{
	char name[100];
	char acc[100];
	int pw;
	int bal;
};


void main(){
	User user[3];
	strcpy_s(user[0].name, 100, "���缮");
	strcpy_s(user[0].acc, 100, "111-111");
	user[0].pw =1234;
	user[0].bal =50000;

	int run =1;
	while(run){
		printf("1. �α���\n");
		printf("2. �۱�\n");
		int sel;
		scanf_s("%d", &sel);
		if(sel ==1){}
	}







	printf("\n");
	system("pause");
}