#include<stdio.h>
#include<Windows.h>
#include<time.h>

//���� : 1. time.h ���� �߰� 2. srand(time(0)); ���� �ѹ�����
//�����Լ� : rnad(); 0~40000 ������ ���� ���ڰ� ��µȴ�.

 void main(){
	 srand(time(0));

	 printf("%d",rand()); printf("\n"); printf("\n");

	 //����1) 0~2�� ������ ���
	 int a;
	 a = rand() % 3; //����� 3���� ������, 0, 1, 2�� ���������� ���´�.
	 printf("%d", a); printf("\n");
	 printf("\n");

	 //����2) 1~4�� ������
	 a = rand() % 4 + 1;
	 printf("%d", a); printf("\n");
	 printf("\n");

	 //����3) -3~3 ������
	 a = rand() % 7 - 3;
	 printf("%d", a); printf("\n");
	 printf("\n");

	 //90% Ȯ���� ��÷�Ǵ� ���� �����
	 // 1% Ȯ���� ��÷�Ǵ� ���� �����
	 int L;
	 L = rand() % 100;
	 if(L < 90) printf("90%%��÷"), printf("\n");
	 else printf("��"), printf("\n");

	 L = rand() % 100;
	 if(L == 99) printf("1%%��÷"), printf("\n");
	 else printf("��"), printf("\n");
	

	 system("pause");
 }