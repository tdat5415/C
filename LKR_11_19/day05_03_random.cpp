#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(){
	srand(time(0));

	//����1) ���� �յڰ��� : ��(1) ��(0) : ������ �յڸ� ���ߴ� ����
	printf("���ΰ���"); printf("\n");
	int coin;
	printf("�� �Ǵ� �ڸ� �Է��Ͻÿ� : (1/0)");
	scanf("%d",&coin);
	if(rand() % 2 == coin)  printf("����"), printf("\n");
	else printf("Ʋ��"), printf("\n");
	printf("\n");

	//���ٿ� ����
	// com : 1~100������ �������� �����Ѵ�.
	// me : 1~100������ ���� ���� �Է¹޴´�.
	//�� ���ؼ� ũ�� �۴� ���� ���
	int com,me;
	com = rand() % 100 + 1;
	printf("1~100���� �Է� : ");
	scanf("%d",&me);
	if(com < me) printf("ũ��"), printf("\n");
	if(com > me) printf("�۴�"), printf("\n");
	if(com == me) printf("����"), printf("\n");
	printf("\n");




	system("pause");
}