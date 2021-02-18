#include<stdio.h>
#include<time.h>
#include<Windows.h>

void main(){
	srand(time(NULL));

	int sword_level = 5;
	int sword_price = 1000;
	int sword_power = 20;
	int run = 1;
	// 10 프로확률로 레벌업, 파워2배 가격2배
	// 90 프로확률로 레벨다운, 파워반, 가격반
	printf("강화 or 종료 (1/0)\n");
	scanf_s("%d",&run);
	while(run && sword_level>1){
		
		if(rand()%10){
			sword_level--;
			sword_price>>=1;
			sword_power>>=1;
		}
		else{
			sword_level++;
			sword_price<<=1;
			sword_power<<=1;
		}
		printf("%d %d %d \n",sword_level, sword_price, sword_power);
		printf("\n");

		printf("강화 or 종료 (1/0)\n");
		scanf_s("%d",&run);
	}

	//반복문
	//0~10 출력
	//0~10 3의 배수만출력
	//0~10 짝수이고3의배수
	int n = 0;
	while(n<11){
		printf("%d\n",n);
		n++;
	}
	printf("\n");
	n = 0;
	while(n<11){
		if(n%3 == 0) printf("%d\n",n);
		n++;
	}
	printf("\n");
	n = 0;
	while(n<11){
		if(n%6 == 0) printf("%d\n",n);
		n++;
	}
	printf("\n");



	system("pause");
}