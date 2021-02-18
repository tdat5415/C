#include<stdio.h>
#include<Windows.h>


void test(int n);

void test2(int* p);


void main(){
	int a =10;
	printf("%d\n", a);

	test(a);
	printf("%d\n", a);

	test2(&a);
	printf("%d\n", a);



	printf("\n");
	system("pause");
}


void test(int n){
	n =100;
}

void test2(int* p){
	p[0] =200;
}