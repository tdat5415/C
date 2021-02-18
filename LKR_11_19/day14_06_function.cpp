#include<stdio.h>
#include<Windows.h>
//함수
//함수의 모양 4종류
//00 01 10 11

void test();//00
void test2(int, int);//01


void main(){

	//test();
	//test2(2, 3);
	int ladder[9][5] ={
		{0, 0, 0, 0, 0},
		{1, 1, 0, 1, 1},
		{0, 1, 1, 0, 0},
		{0, 0, 0, 1, 1},
		{1, 1, 1, 1, 0},
		{0, 1, 1, 0, 0},
		{0, 0, 1, 1, 0},
		{1, 1, 0, 1, 1},
		{0, 0, 0, 0, 0},
	};


	printf("\n");
	system("pause");
}
////////////////////////////////
void test(){
	printf("asdf\n");
}
///////////////////////////////
void test2(int a, int b){
	printf("%d + %d = %d", a, b, a +b);
}