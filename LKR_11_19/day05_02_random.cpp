#include<stdio.h>
#include<Windows.h>
#include<time.h>

//랜덤 : 1. time.h 파일 추가 2. srand(time(0)); 위에 한번적기
//랜덤함수 : rnad(); 0~40000 사이의 랜덤 숫자가 출력된다.

 void main(){
	 srand(time(0));

	 printf("%d",rand()); printf("\n"); printf("\n");

	 //문제1) 0~2의 랜덤값 출력
	 int a;
	 a = rand() % 3; //어떤수를 3으로 나누면, 0, 1, 2의 나머지값을 갖는다.
	 printf("%d", a); printf("\n");
	 printf("\n");

	 //문제2) 1~4의 랜덤값
	 a = rand() % 4 + 1;
	 printf("%d", a); printf("\n");
	 printf("\n");

	 //문제3) -3~3 랜덤값
	 a = rand() % 7 - 3;
	 printf("%d", a); printf("\n");
	 printf("\n");

	 //90% 확률로 당첨되는 복권 만들기
	 // 1% 확률로 당첨되는 복권 만들기
	 int L;
	 L = rand() % 100;
	 if(L < 90) printf("90%%당첨"), printf("\n");
	 else printf("꽝"), printf("\n");

	 L = rand() % 100;
	 if(L == 99) printf("1%%당첨"), printf("\n");
	 else printf("꽝"), printf("\n");
	

	 system("pause");
 }