#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(){
	//31
	//1. p1, p2�� �÷��̾��. ���� ������  ���鼭 1~3������ ���� �����Է�
	//2. br�� p1 p2�� ���� �Է��Ҷ� ���� ���� ����
	//3. br �� 31�� �Ѿ�� �й�, �¸��� ���
	int p1 = 1;
	int p2 = 0;
	int br = 0;
	int temp;
	while(br<=31){
		printf("br = %d\n", br);
		if(p1){
			printf("Player1 (1~3)�Է�: ");
			scanf_s("%d",&temp);
			br += temp;
			p1 = 0;
			p2 = 1;
		}
		else if(p2){
			printf("Player2 (1~3)�Է�: ");
			scanf_s("%d",&temp);
			br += temp;
			p2 = 0;
			p1 = 1;
		}
		printf("\n");
	}
	if(p1) printf("Player1 �¸�");
	if(p2) printf("Player2 �¸�");

	printf("\n");

	printf("\n");
	system("pause");
}