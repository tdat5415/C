#include<stdio.h>
#include<Windows.h>
#include<string.h>
//더블 포인터
//포인터의 주소를저장할수 있다.

void main(){
	/*
	int a =10;
	int* p;
	int** pp;

	p =&a;
	pp =&p;

	printf("%d\n", a);
	printf("%d\n", p[0]);
	printf("%d\n", pp[0][0]);

	printf("%d\n", &a);
	printf("%d\n", p);
	printf("%d\n", pp[0]);
	*/

	int** pp;
	*pp =new int[3];
	pp[0] =new int[4];
	pp[1] =new int[4];
	pp[2] =new int[4];

	pp[0][0] =1001;
	pp[0][1] =30;
	pp[0][2] =40;
	pp[0][3] =50;

	pp[0][0] =1002;
	pp[0][1] =30;
	pp[0][2] =40;
	pp[0][3] =50;

	pp[0][0] =1003;
	pp[0][1] =30;
	pp[0][2] =40;
	pp[0][3] =50;




	printf("\n");
	system("pause");
}