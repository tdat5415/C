#include<stdio.h>
#include<time.h>
#include<Windows.h>
//���°���
//1) card�� ����
//2) ȭ�鿡�� print�� ���
//3) �ε��� 2���� �Է¹ް� ���� ������ print����

void main(){
	srand(time(NULL));
	int card[10] ={11, 11, 22, 22, 33, 33, 44, 44, 55, 55};
	int print[10] ={0};
	int ind1, ind2;


	int R;
	for(int i =0; i <100; i++){
		R =rand() %9 +1;
		card[0] =card[0] ^card[R];
		card[R] =card[0] ^card[R];
		card[0] =card[0] ^card[R];
	}

	int run =1;
	int flag;
	while(run){
		for(int i =0; i <10; i++) printf("%2d ", print[i]);
		printf("\n");

		printf("�ε��� �ΰ��� �Է��Ͻÿ� (0~9) : ");
		scanf_s("%d %d", &ind1, &ind2);
		printf("%d %d\n", card[ind1], card[ind2]);
		printf("\n");

		if(card[ind1] ==card[ind2]){
			print[ind1] =card[ind1];
			print[ind2] =card[ind2];
		}

		flag =0;
		for(int i =0; i <10; i++) if(print[i] ==0) flag =1;
		if(flag ==0) run =0;
	}


	printf("\n");
	system("pause");
}