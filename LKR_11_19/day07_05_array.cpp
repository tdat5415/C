#include<stdio.h>
#include<Windows.h>

void main(){
	int arr[5];
	//arr �迭�� 1~5���� ������ ���
	int n;
	n = 0;
	while(n<5){
		arr[n] = n + 11;
		printf("%d\n",arr[n]);
		n++;
	}
	printf("\n");

	//Ȧ�������
	n = 0;
	while(n<5){
		if(arr[n]&1) printf("%d\n",arr[n]);
		n++;
	}
	printf("\n");

	//��ü�����
	n = 0;
	int total = 0;
	while(n<5){
		total += arr[n];
		n++;
	}
	printf("��ü�� : %d\n",total);
	printf("\n");

	//Ȧ�������
	n = 0;
	total = 0;
	while(n<5){
		if(arr[n]&1) total += arr[n];
		n++;
	}
	printf("Ȧ���� : %d\n",total);
	printf("\n");

	//3�� ����� ���ȣ ���
	n = 0;
	while(n<5){
		if(arr[n] % 3 == 0) printf("3�ǹ�����ȣ : %d\n",n);
		n++;
	}
	printf("\n");
	

	printf("\n");
	system("pause");
}