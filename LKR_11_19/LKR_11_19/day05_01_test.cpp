#include<stdio.h>
#include<Windows.h>
 
void main() {
	int cash = 2000;
	int acc = 4000;
	int pw = 1234, my_pw;
	int sel;
	printf("===ATM==="); printf("\n");
	printf("1. �Ա�"); printf("\n");
	printf("2. ���"); printf("\n");
	printf("���� : %d",cash); printf("\n");
	printf("���� : %d",acc); printf("\n");
	printf("��ȣ�� �Է��ϼ��� : "); printf("\n");
	scanf_s("%d", &sel);
	
	//����1) �Ա��ϸ� ���¿� ���� ����, ���ݰ���
	if(sel == 1) {
		int temp;
		printf("�Աݱݾ��� �Է��ϼ��� : ");
		scanf_s("%d", &temp);
		if(temp <= cash){
			cash -= temp;
			acc += temp;
			temp = 0;
			printf("���� : %d", cash); printf("\n");
			printf("���� : %d", acc); printf("\n");
		}
		if(temp > cash) printf("���� �����"), printf("\n");
	}
	//����2) ����ϸ� ���� ����, �������� ( ���� : ��й�ȣüũ)
	if(sel == 2) {
		int temp;
		printf("����� �Է��ϼ��� : ");
		scanf_s("%d", &my_pw);
		if(my_pw == pw){
			printf("��ݱݾ��� �Է��ϼ��� : ");
			scanf_s("%d", &temp);
			if (temp <= acc) {
				acc -= temp;
				cash += temp;
				temp = 0;
				printf("���� : %d", cash); printf("\n");
				printf("���� : %d", acc); printf("\n");
			}
			if (temp > acc) printf("���� �����"), printf("\n");
		}
		if (my_pw != pw) printf("����� ��ġ�����ʾƿ�"), printf("\n");
	}
	//����) �Աݽó� ��ݽ� ���̳ʽ��� ���û�Ȳ ����ó��
 
 
 
	system("pause");
}
