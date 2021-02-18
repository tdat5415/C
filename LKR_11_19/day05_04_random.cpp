#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(){
	srand(time(0));
	
	//가위0바위1보2
	int com,me;
	com = rand() % 3;
	printf("가위바위보게임(가위0바위1보2)입력 : ");
	scanf("%d",&me);
	/*
	if(com == 0){
		printf("컴퓨터 : 가위"); printf("\n");
		if(com == me) printf("나 : 가위"), printf("\n"), printf("비김"), printf("\n");
		if(me == 1) printf("나 : 바위"), printf("\n"), printf("이김"), printf("\n");
		if(me == 2) printf("나 : 보"), printf("\n"), printf("짐"), printf("\n");
	}
	if(com == 1){
		printf("컴퓨터 : 바위"); printf("\n");
		if(com == me) printf("나 : 바위"), printf("\n"), printf("비김"), printf("\n");
		if(me == 2) printf("나 : 보"), printf("\n"), printf("이김"), printf("\n");
		if(me == 0) printf("나 : 가위"), printf("\n"), printf("짐"), printf("\n");
	}if(com == 2){
		printf("컴퓨터 : 보"); printf("\n");
		if(com == me) printf("나 : 보"), printf("\n"), printf("비김"), printf("\n");
		if(me == 0) printf("나 : 가위"), printf("\n"), printf("이김"), printf("\n");
		if(me == 1) printf("나 : 바위"), printf("\n"), printf("짐"), printf("\n");
	}
	*/
	printf("%d %d",com,me);
	if(me == (com+1) % 3) printf("이김");
	if(com == (me+1) % 3) printf("짐");
	if(com == me) printf("비김");
	printf("\n");




	system("pause");
}