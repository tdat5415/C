#include<stdio.h>
#include<Windows.h>

void main(){
	//�Ҽ�ã��
	int num1, num2;
	printf("���Է� : ");
	scanf_s("%d",&num1);
	int n = 2;
	int flag = 0;
	while(n < num1){
		if(num1 % n == 0) flag = 1;//�Ҽ��� �ƴϴ�
		n++;
	}
	if(flag) printf("�Ҽ����ƴϴ�.\n");
	else printf("�Ҽ��̴�.\n");
	printf("\n");

	printf("���Է� : ");
	scanf_s("%d",&num2);
	flag = 0;
	num1 = 2;
	while(num1 < num2){
		flag = 0;
		n = 2;
		while(n < num1){
			if(num1 % n == 0) flag = 1;//�Ҽ��� �ƴϴ�
			n++;
		}
		if(flag == 0) printf("%d \n",num1);
		num1++;
	}

	printf("\n");
	system("pause");
}