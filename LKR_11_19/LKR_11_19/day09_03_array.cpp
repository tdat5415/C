#include<stdio.h>
#include<Windows.h>

void main(){
	int arr[5] ={10, 20, 30, 40, 50};
	int index1;
	int index2;
	int _t1;
	int _t2;
	int i;
	
	// ����1) �ε��� 2�� �Է¹ް� �� ��ȯ
	// 1, 3 : 10 40 30 20 50
	i =0;
	while(i <5){
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	/*
	printf("��ȯ�� �ΰ� �ε����� �Է��Ͻÿ� : ");
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
	//����2) �� 2�� �� �Է¹ް� ����ȯ
	printf("��ȯ�� �ΰ� ���� �Է��Ͻÿ� : ");
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