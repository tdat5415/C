#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(){
	srand(time(0));
	
	//����0����1��2
	int com,me;
	com = rand() % 3;
	printf("��������������(����0����1��2)�Է� : ");
	scanf("%d",&me);
	/*
	if(com == 0){
		printf("��ǻ�� : ����"); printf("\n");
		if(com == me) printf("�� : ����"), printf("\n"), printf("���"), printf("\n");
		if(me == 1) printf("�� : ����"), printf("\n"), printf("�̱�"), printf("\n");
		if(me == 2) printf("�� : ��"), printf("\n"), printf("��"), printf("\n");
	}
	if(com == 1){
		printf("��ǻ�� : ����"); printf("\n");
		if(com == me) printf("�� : ����"), printf("\n"), printf("���"), printf("\n");
		if(me == 2) printf("�� : ��"), printf("\n"), printf("�̱�"), printf("\n");
		if(me == 0) printf("�� : ����"), printf("\n"), printf("��"), printf("\n");
	}if(com == 2){
		printf("��ǻ�� : ��"); printf("\n");
		if(com == me) printf("�� : ��"), printf("\n"), printf("���"), printf("\n");
		if(me == 0) printf("�� : ����"), printf("\n"), printf("�̱�"), printf("\n");
		if(me == 1) printf("�� : ����"), printf("\n"), printf("��"), printf("\n");
	}
	*/
	printf("%d %d",com,me);
	if(me == (com+1) % 3) printf("�̱�");
	if(com == (me+1) % 3) printf("��");
	if(com == me) printf("���");
	printf("\n");




	system("pause");
}