#include<stdio.h>
#include<Windows.h>


//��, ����, �ΰ�, ����, ��ȯ, �ƽ�, �߰�, ����, ����


void main(){
	//�迭
	int arr[5] = {10, 20, 30, 40, 50};
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);
	printf("\n");

	int n = 0;
	while(n < 5){
		printf("%d\n", arr[n]);
		n++;
	}
	printf("\n");

	//����1) 3�� ����� ���
	n = 0;
	while(n < 5){
		if(arr[n] % 3 == 0) printf("%d\n", arr[n]);
		n++;
	}
	printf("\n");

	//����2) 3�� ����� ��
	n = 0;
	int tot = 0;
	while(n < 5){
		if(arr[n] % 3 == 0) tot += arr[n];
		n++;
	}
	printf("%d\n",tot);
	printf("\n");

	//����3) 3�� ����� ����
	n = 0;
	int cnt = 0;
	while(n < 5){
		if(arr[n] % 3 == 0) cnt++;
		n++;
	}
	printf("%d\n",cnt);
	printf("\n");

	//����4) ���ȣ(index)�� �Է��ϸ� ����� : 1 - 20, 4 - 50
	printf("index �Է� : ");
	scanf_s("%d",&n);
	printf("%d",arr[n]);
	printf("\n");

	//����5) ���� �Է��ϸ� ���ȣ(index)���
	int temp;
	printf("�� �Է� : ");
	scanf_s("%d",&temp);
	n = 0;
	while(n < 5){
		if(arr[n] == temp) printf("%d",n);
		n++;
	}
	printf("\n");



	printf("\n");
	system("pause");
}