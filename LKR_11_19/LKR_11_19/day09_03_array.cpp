#include<stdio.h>
#include<Windows.h>

void main(){
	int arr[5] ={10, 20, 30, 40, 50};
	int index1;
	int index2;
	int _t1;
	int _t2;
	int i;
	
	// 문제1) 인덱스 2개 입력받고 값 교환
	// 1, 3 : 10 40 30 20 50
	i =0;
	while(i <5){
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	/*
	printf("교환할 두개 인덱스를 입력하시오 : ");
	scanf_s("%d %d", &index1, &index2);
	arr[index1] =arr[index1] ^ arr[index2];
	arr[index2] =arr[index1] ^ arr[index2];
	arr[index1] =arr[index1] ^ arr[index2];

	i =0;
	while(i <5){
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	*/
	//문제2) 값 2개 를 입력받고 값교환
	printf("교환할 두개 값을 입력하시오 : ");
	scanf_s("%d %d", &_t1, &_t2);
	i =0;
	while(i <5){
		if(arr[i] == _t1) index1 =i;
		else if(arr[i] == _t2) index2 =i;
		i++;
	}
	
	printf("\n");
	arr[index1] =arr[index1] ^ arr[index2];
	arr[index2] =arr[index1] ^ arr[index2];
	arr[index1] =arr[index1] ^ arr[index2];
	i =0;
	while(i <5){
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");


	printf("\n");
	system("pause");
}