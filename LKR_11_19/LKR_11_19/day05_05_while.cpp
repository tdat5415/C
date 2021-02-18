#include<stdio.h>
#include<Windows.h>
#include<time.h>

//반복문
//실행문종료후 while로 다시이동

void main(){
	srand(time(0));
	//문제1)0~5출력
	int n = 0;

	while(n<6){
		printf("%d\n",n);
		n = n + 1;
	}
	printf("\n");

	//문제2)10~15
	n = 0;
	while(n<6){
		printf("%d\n",n+10);
		n = n + 1;
	}
	printf("\n");

	//문제3)0~10홀수
	n = 1;
	while(n<=10){
		printf("%d\n",n);
		n = n + 2;
	}
	printf("\n");

	//문제4)1~100랜덤숫자 입력받은갯수
	int i;
	printf("숫자입력 : ");
	scanf("%d",&i);
	n = 0;
	int m;
	while(n<i){
		m = rand() % 100 +1;
		printf("%d\n",m);
		n = n + 1;
	}
	printf("\n");



	printf("\n");
	system("pause");
}