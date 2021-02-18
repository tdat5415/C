#include<stdio.h>
#include<Windows.h>

void main(){
	//소수찾기
	int num1, num2;
	printf("수입력 : ");
	scanf_s("%d",&num1);
	int n = 2;
	int flag = 0;
	while(n < num1){
		if(num1 % n == 0) flag = 1;//소수가 아니다
		n++;
	}
	if(flag) printf("소수가아니다.\n");
	else printf("소수이다.\n");
	printf("\n");

	printf("수입력 : ");
	scanf_s("%d",&num2);
	flag = 0;
	num1 = 2;
	while(num1 < num2){
		flag = 0;
		n = 2;
		while(n < num1){
			if(num1 % n == 0) flag = 1;//소수가 아니다
			n++;
		}
		if(flag == 0) printf("%d \n",num1);
		num1++;
	}

	printf("\n");
	system("pause");
}