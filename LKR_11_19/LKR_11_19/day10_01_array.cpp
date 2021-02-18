#include<stdio.h>
#include<Windows.h>
#include<time.h>



void main(){
	srand(time(NULL));
	//셔플
	int lotto[9] ={11,12,13,14,15,16,17,18,19};
	int index1, index2;
	//문제1) 인덱스 2개입력받고 교환
	int i =0;/*
	while(i <9){
		printf("%d ", lotto[i]);
		i++;
	}
	printf("\n");

	printf("인덱스 두개를 입력하시오 : ");
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

	//문제2) 값 2개를 입력받고 교환
	int val1, val2;

	i =0;
	while(i <9){
		printf("%d ", lotto[i]);
		i++;
	}
	printf("\n");

	printf("값 두개를 입력하시오 : ");
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

	//문제3) 0번 인덱스의 값과 랜덤 인덱스의 값을 교환 100번
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