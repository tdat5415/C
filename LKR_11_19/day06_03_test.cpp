#include<stdio.h>
#include<Windows.h>

void main(){
	//영수증출력
	//5번주문하고 영수증출력 갯수,거스름돈
	int money = 50000;
	printf("==========롯데리아=========\n");
	printf("1.버거 2000원\n");
	printf("2.콜라 4000원\n");
	printf("3.감자 5000원\n");
	int a=0,b=0,c=0,n=0,temp;
	while(n<5){
		printf("주문하시오 : ");
		scanf_s(" %d",&temp);
		if(temp == 1){
			money -= 2000;
			a++;
			n++;
		}
		else if(temp == 2){
			money -= 4000;
			b++;
			n++;
		}
		else if(temp == 3){
			money -= 5000;
			c++;
			n++;
		}
		else printf("다시");
	}
	printf("=====영수증=====\n");
	printf("버거 : %d개\n",a);
	printf("콜라 : %d개\n",b);
	printf("감자 : %d개\n",c);
	printf("거스름돈 : %d원\n",money);


	printf("\n");
	system("pause");
}