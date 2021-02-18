#include<stdio.h>
#include<Windows.h>

void main(){
	//문제3)쇼핑몰 - 구입 - 영수증 출력
	//남성의류 - 1.티셔츠 2. 바지 3. 뒤로가기 // 뒤로가기 누르기 전까지 남성의류에 계속 머물러 있어야 한다.
	//여성의류 - 1. 치마 2. 자켓 3. 뒤로가기
	int run;
	int shop;
	int corner;
	int sel;
	int a=0,b=0,c=0,d=0;//물건
	run = 1;
	while(run){
		printf("1. 쇼핑몰\n");
		printf("2. 구입\n");
		printf("3. 종료\n");
		printf("어떤메뉴를 이용하겠습니까? : ");
		scanf_s("%d",&sel);
		printf("\n");
		if(sel == 1){
			shop = 1;
			while(shop){
				printf("1. 남성의류\n");
				printf("2. 여성의류\n");
				printf("3. 뒤로가기\n");
				printf("어떤메뉴를 이용하겠습니까? : ");
				scanf_s("%d",&sel);
				printf("\n");
				if(sel == 1){
					corner = 1;
					while(corner){
						printf("1. 티셔츠\n");
						printf("2. 바지\n");
						printf("3. 뒤로가기\n");
						printf("어떤것을 선택하겠습니까? : ");
						scanf_s("%d",&sel);
						printf("\n");
						if(sel == 1) a++;
						if(sel == 2) b++;
						if(sel == 3) corner = 0, sel = 0;
					}
				}
				if(sel == 2){
					corner = 1;
					while(corner){
						printf("1. 치마\n");
						printf("2. 자켓\n");
						printf("3. 뒤로가기\n");
						printf("어떤것을 선택하겠습니까? : ");
						scanf_s("%d",&sel);
						printf("\n");
						if(sel == 1) c++;
						if(sel == 2) d++;
						if(sel == 3) corner = 0, sel = 0;
					}
				}
				if(sel == 3) shop = 0, sel = 0;
			}
		}
		if(sel == 2){
			printf("====영수증====\n");
			if(a>0) printf("티셔츠 : %d\n",a);
			if(b>0) printf("바지 : %d\n",b);
			if(c>0) printf("치마 : %d\n",c);
			if(d>0) printf("자켓 : %d\n",d);
			printf("==============\n");
			sel = 0;
			a=0,b=0,c=0,d=0;
		}
		if(sel == 3) run = 0, sel = 0;
	}


	printf("\n");
	system("pause");
}