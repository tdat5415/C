#include<stdio.h>
#include<Windows.h>
#include<time.h>


void main(){
	//����1) com�� 10~19 ������ ���� ���� 3�� ����( ��ġ���ʰ�)
	//��� : arr[10]�� ������ �տ� 3���� com�� ����
	srand(time(NULL));
	int com[3];
	int arr[10] ={10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

	int temp;
	int i =0;
	while(i <100){
		temp =rand() %9 +1;
		arr[0] =arr[0] ^arr[temp];
		arr[temp] =arr[0] ^arr[temp];
		arr[0] =arr[0] ^arr[temp];
		i++;
	}
	
	i =0;
	while(i <10){
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");

	i =0;
	while(i <3){
		com[i] =arr[i];
		printf("%d ", com[i]);
		i++;
	}
	printf("\n");



	printf("\n");
	system("pause");
}