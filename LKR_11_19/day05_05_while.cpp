#include<stdio.h>
#include<Windows.h>
#include<time.h>

//�ݺ���
//���๮������ while�� �ٽ��̵�

void main(){
	srand(time(0));
	//����1)0~5���
	int n = 0;

	while(n<6){
		printf("%d\n",n);
		n = n + 1;
	}
	printf("\n");

	//����2)10~15
	n = 0;
	while(n<6){
		printf("%d\n",n+10);
		n = n + 1;
	}
	printf("\n");

	//����3)0~10Ȧ��
	n = 1;
	while(n<=10){
		printf("%d\n",n);
		n = n + 2;
	}
	printf("\n");

	//����4)1~100�������� �Է¹�������
	int i;
	printf("�����Է� : ");
	scanf("%d",&i);
	n = 0;
	int m;
	while(n<i){
		m = rand() % 100 +1;
		printf("%d\n",m);
		n = n + 1;
	}
	printf("\n");



	printf("\n");
	system("pause");
}