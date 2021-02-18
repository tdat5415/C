#include<stdio.h>
#include<Windows.h>
#include<time.h>
// 포인터 // 메모리구조




void main(){
	int a		=2000000000;// -20억 ~ +20억 //4byte 2^32

	float b		=600000001; //4byte

	double c	=1234512345; //8byte 2^64

	char d		='k';
	printf("%d\n", a);
	printf("%f\n", b);
	printf("%lf\n", c);
	printf("%c\n", d);
	printf("%d\n", d);
	printf("%d\n" );




	printf("\n");
	system("pause");
}