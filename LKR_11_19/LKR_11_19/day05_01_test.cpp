#include<stdio.h>
#include<Windows.h>
 
void main() {
	int cash = 2000;
	int acc = 4000;
	int pw = 1234, my_pw;
	int sel;
	printf("===ATM==="); printf("\n");
	printf("1. 입금"); printf("\n");
	printf("2. 출금"); printf("\n");
	printf("현금 : %d",cash); printf("\n");
	printf("계좌 : %d",acc); printf("\n");
	printf("번호를 입력하세요 : "); printf("\n");
	scanf_s("%d", &sel);
	
	//문제1) 입금하면 계좌에 돈이 증가, 현금감소
	if(sel == 1) {
		int temp;
		printf("입금금액을 입력하세요 : ");
		scanf_s("%d", &temp);
		if(temp <= cash){
			cash -= temp;
			acc += temp;
			temp = 0;
			printf("현금 : %d", cash); printf("\n");
			printf("계좌 : %d", acc); printf("\n");
		}
		if(temp > cash) printf("돈이 없어요"), printf("\n");
	}
	//문제2) 출금하면 계좌 감수, 현금증가 ( 조건 : 비밀번호체크)
	if(sel == 2) {
		int temp;
		printf("비번을 입력하세요 : ");
		scanf_s("%d", &my_pw);
		if(my_pw == pw){
			printf("출금금액을 입력하세요 : ");
			scanf_s("%d", &temp);
			if (temp <= acc) {
				acc -= temp;
				cash += temp;
				temp = 0;
				printf("현금 : %d", cash); printf("\n");
				printf("계좌 : %d", acc); printf("\n");
			}
			if (temp > acc) printf("돈이 없어요"), printf("\n");
		}
		if (my_pw != pw) printf("비번이 일치하지않아요"), printf("\n");
	}
	//조건) 입금시나 출금시 마이너스가 나올상황 예외처리
 
 
 
	system("pause");
}
