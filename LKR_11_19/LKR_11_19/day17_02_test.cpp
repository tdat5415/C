#include<stdio.h>
#include<Windows.h>


void main(){
	//���ڿ� �Է�
	char c ='a'; //1byte : ���ĺ� 1���� ����
	char d ='��';//2byte : �迭�� �����ؾ��Ѵ�.
	printf("%c\n", c);
	printf("%c\n", d);


	
	char name[20] ="��";
	printf("%s\n", name);

	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, 20);//���ڿ��� �Է¹����� �迭 ũ�⵵ ǥ��
	printf("%s\n", name);


	//�̸�, ����, ����
	/*
	char name[20][20];
	int score[20];
	int age[20];
	*/



	printf("\n");
	system("pause");
}