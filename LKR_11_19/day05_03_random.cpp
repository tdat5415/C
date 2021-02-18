#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(){
	srand(time(0));

	//문제1) 코인 앞뒤게임 : 앞(1) 뒤(0) : 코인의 앞뒤를 맞추는 게임
	printf("코인게임"); printf("\n");
	int coin;
	printf("앞 또는 뒤를 입력하시오 : (1/0)");
	scanf("%d",&coin);
	if(rand() % 2 == coin)  printf("맞춤"), printf("\n");
	else printf("틀림"), printf("\n");
	printf("\n");

	//업다운 게임
	// com : 1~100사이의 랜덤값을 저장한다.
	// me : 1~100사이의 값을 직접 입력받는다.
	//둘 비교해서 크다 작다 같다 출력
	int com,me;
	com = rand() % 100 + 1;
	printf("1~100사이 입력 : ");
	scanf("%d",&me);
	if(com < me) printf("크다"), printf("\n");
	if(com > me) printf("작다"), printf("\n");
	if(com == me) printf("같다"), printf("\n");
	printf("\n");




	system("pause");
}