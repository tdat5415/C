#include<stdio.h>
#include<Windows.h>
#include<string.h>

//저장, 로드
//저장 : RAM(메모리) 에 있는 정보를 하드디스크로 옮기는 것
//로드 : 하드디스크에 있는 정보를 RAM으로 옮기는 것
//저장로드를 문자열로 밖에 할 수 없다.

//자르기, 문자를 숫자로 변경, 숫자를 문자로 변경

void main(){
	int a =10; //10 : "10"


	char data[100] ="100/20/30/40"; //csv ','     dot '::'
	//1. 자르기 : strtok_s()

	char temp[100];//원본 복사용
	char*front;
	char*end;
	//strcpy_s(temp, 100, data);
	//front =strtok_s(temp, "/", &end);//1. front : 100     //temp에 있는것을 잘라서 1.자른것 temp 저장 2.temp주소를 출력 3. 나머지 end저장 
	//strcpy_s(temp, 100, end);

	//printf("%s\n", front);
	//printf("%s\n", temp);
	//printf("%s\n", end);


	strcpy_s(temp, 100, data);
	end =temp;
	int score[4];
	for(int i =0; i <4; i++){
		front =strtok_s(end, "/", &end);
		score[i] =atoi(front);
		printf("%d\n", score[i]);
	}

	/*
	strcpy_s(temp, 100, data);
	int score[4];
	for(int i =0; i <4; i++){
		front =strtok_s(temp, "/", &end);
		score[i] =atoi(front);
		strcpy_s(temp, 100, end);
		printf("%d\n", score[i]);
	}
	*/





	printf("\n");
	system("pause");
}