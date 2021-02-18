#include<stdio.h>
#include<Windows.h>
#include<string.h>
//더블 포인터
//포인터의 주소를저장할수 있다.

void main(){
	int arr[3][4];

	int** pp;
	pp =new int*[3];
	pp[0] =new int[4];
	pp[1] =new int[4];
	pp[2] =new int[4];
	

	char** name_pp;
	name_pp =new char*[3];
	name_pp[0] =new char[4];
	name_pp[1] =new char[4];
	name_pp[2] =new char[4];





	printf("\n");
	system("pause");
}