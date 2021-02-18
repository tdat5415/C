#include<stdio.h>
#include<Windows.h>
// 포인터 // 램 메모리구조 //스텍, 힙, 데이터

void main(){
	int* p;//주소저장;
	int a =10;
	int b;
	printf("%d\n", a);
	printf("%d\n", &a);//앰퍼샌드
	p =&a;
	printf("%d\n", p[0]);//앰퍼샌드


	printf("\n");
	system("pause");
}