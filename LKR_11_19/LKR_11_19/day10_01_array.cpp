#include<stdio.h>
#include<Windows.h>
#include<time.h>



void main(){
	srand(time(NULL));
	//����
	int lotto[9] ={11,12,13,14,15,16,17,18,19};
	int index1, index2;
	//����1) �ε��� 2���Է¹ް� ��ȯ
	int i =0;/*
	while(i <9){
		printf("%d ", lotto[i]);
		i++;
	}
	printf("\n");

	printf("�ε��� �ΰ��� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &index1, &index2);
	lotto[index1] =lotto[index1] ^lotto[index2];
	lotto[index2] =lotto[index1] ^lotto[index2];
	lotto[index1] =lotto[index1] ^lotto[index2];

	i =0;
	while(i <9){
		printf("%d ", lotto[i]);
		i++;
	}
	printf("\n");

	printf("\n");

	//����2) �� 2���� �Է¹ް� ��ȯ
	int val1, val2;

	i =0;
	while(i <9){
		printf("%d ", lotto[i]);
		i++;
	}
	printf("\n");

	printf("�� �ΰ��� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &val1, &val2);
	i =0;
	while(i <9){
		if(lotto[i] ==val1) index1 =i;
		else if(lotto[i] ==val2) index2 =i;
		i++;
	}
	lotto[index1] =lotto[index1] ^lotto[index2];
	lotto[index2] =lotto[index1] ^lotto[index2];
	lotto[index1] =lotto[index1] ^lotto[index2];
	
	i =0;
	while(i <9){
		printf("%d ", lotto[i]);
		i++;
	}
	printf("\n");

	printf("\n");

	*/

	//����3) 0�� �ε����� ���� ���� �ε����� ���� ��ȯ 100��
	i =0;
	while(i <9){
		printf("%d ", lotto[i]);
		i++;
	}
	printf("\n");

	index1 =0;
	i =0;
	while(i <100){
		index2 =rand() %8 +1;
		lotto[index1] =lotto[index1] ^lotto[index2];
		lotto[index2] =lotto[index1] ^lotto[index2];
		lotto[index1] =lotto[index1] ^lotto[index2];
		i++;
	}

	i =0;
	while(i <9){
		printf("%d ", lotto[i]);
		i++;
	}
	printf("\n");








	printf("\n");
	system("pause");
}