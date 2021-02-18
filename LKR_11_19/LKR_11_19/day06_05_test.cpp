#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(){
	//31
	//1. p1, p2는 플레이어다. 둘이 번갈아  가면서 1~3사이의 값을 직접입력
	//2. br은 p1 p2가 값을 입력할때 마다 누적 저장
	//3. br 이 31을 넘어가면 패배, 승리자 출력
	int p1 = 1;
	int p2 = 0;
	int br = 0;
	int temp;
	while(br<=31){
		printf("br = %d\n", br);
		if(p1){
			printf("Player1 (1~3)입력: ");
			scanf_s("%d",&temp);
			br += temp;
			p1 = 0;
			p2 = 1;
		}
		else if(p2){
			printf("Player2 (1~3)입력: ");
			scanf_s("%d",&temp);
			br += temp;
			p2 = 0;
			p1 = 1;
		}
		printf("\n");
	}
	if(p1) printf("Player1 승리");
	if(p2) printf("Player2 승리");

	printf("\n");

	printf("\n");
	system("pause");
}