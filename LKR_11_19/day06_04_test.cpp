#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(){
	//업다운게임
	//com에 랜덤값 1~100저장
	//me는 1~100을 직접입력
	//둘을 비교해서 크다작다같다 출력 (맞출때까지반복)
	//반복횟수출력
	srand(time(NULL));
	int com, me = 0, num = 1;
	int big=100, smell = 1;
	com = rand()%100 + 1;
	while(com != me){
		printf("입력 : ");
		scanf_s("%d", &me);
		if(com > me) smell = me, printf("%d < X < %d\n", smell,big);
		if(com < me) big = me, printf("%d < X < %d\n", smell,big);
		printf("횟수 : %d", num);printf("\n");printf("\n");
	
		num++;
	}
	printf("같다"); printf("\n");
	
	

	printf("\n");
	system("pause");
}