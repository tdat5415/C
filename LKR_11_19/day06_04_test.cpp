#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(){
	//���ٿ����
	//com�� ������ 1~100����
	//me�� 1~100�� �����Է�
	//���� ���ؼ� ũ���۴ٰ��� ��� (���⶧�����ݺ�)
	//�ݺ�Ƚ�����
	srand(time(NULL));
	int com, me = 0, num = 1;
	int big=100, smell = 1;
	com = rand()%100 + 1;
	while(com != me){
		printf("�Է� : ");
		scanf_s("%d", &me);
		if(com > me) smell = me, printf("%d < X < %d\n", smell,big);
		if(com < me) big = me, printf("%d < X < %d\n", smell,big);
		printf("Ƚ�� : %d", num);printf("\n");printf("\n");
	
		num++;
	}
	printf("����"); printf("\n");
	
	

	printf("\n");
	system("pause");
}