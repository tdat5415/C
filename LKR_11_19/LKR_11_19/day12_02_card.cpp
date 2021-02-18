#include<stdio.h>
#include<time.h>
#include<Windows.h>
//기억력게임
//1) card를 셔플
//2) 화면에는 print만 출력
//3) 인덱스 2개를 입력받고 값이 같으면 print복사

void main(){
	srand(time(NULL));
	int card[10] ={11, 11, 22, 22, 33, 33, 44, 44, 55, 55};
	int print[10] ={0};
	int ind1, ind2;


	int R;
	for(int i =0; i <100; i++){
		R =rand() %9 +1;
		card[0] =card[0] ^card[R];
		card[R] =card[0] ^card[R];
		card[0] =card[0] ^card[R];
	}

	int run =1;
	int flag;
	while(run){
		for(int i =0; i <10; i++) printf("%2d ", print[i]);
		printf("\n");

		printf("인덱스 두개를 입력하시오 (0~9) : ");
		scanf_s("%d %d", &ind1, &ind2);
		printf("%d %d\n", card[ind1], card[ind2]);
		printf("\n");

		if(card[ind1] ==card[ind2]){
			print[ind1] =card[ind1];
			print[ind2] =card[ind2];
		}

		flag =0;
		for(int i =0; i <10; i++) if(print[i] ==0) flag =1;
		if(flag ==0) run =0;
	}


	printf("\n");
	system("pause");
}