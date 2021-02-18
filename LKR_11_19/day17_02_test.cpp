#include<stdio.h>
#include<Windows.h>


void main(){
	//문자열 입력
	char c ='a'; //1byte : 알파벳 1글자 저장
	char d ='한';//2byte : 배열에 저장해야한다.
	printf("%c\n", c);
	printf("%c\n", d);


	
	char name[20] ="한";
	printf("%s\n", name);

	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, 20);//문자열을 입력받을땐 배열 크기도 표시
	printf("%s\n", name);


	//이름, 점수, 나이
	/*
	char name[20][20];
	int score[20];
	int age[20];
	*/



	printf("\n");
	system("pause");
}