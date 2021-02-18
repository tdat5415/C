#include<stdio.h>
#include<Windows.h>
// 포인터 // 램 메모리구조 //스텍, 힙, 데이터

int a;// 메모리 data영역에 만들어진다.
// 프로그램 실행시 할당되고 조요시 해제된다.




void main(){
	int a =10;
	printf("%d\n", a);
	{
		int a =20;
		printf("%d\n", a);
	}
	printf("%d\n", a);


	printf("\n");
	system("pause");
}