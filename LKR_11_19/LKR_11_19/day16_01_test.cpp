#include<stdio.h>
#include<Windows.h>


//동적할당
//1) new : 키워드 : 메모리영역 heap에 생성
//2) int : 자료크기

//동적할당해제
//1) delete : 키워드
//2) delete p; : p의 주소로 가서 메모리를해제한다.


void main(){
	int a;
	int arr[3];
	int* p;
	new int;
	new int;

	p = new int; //new int 의 메모리주소가 p에 저장된다.
	p[0] = 1000;
	p = new int;
	p[0] = 200;
	printf("%d\n", p[0]);
	delete p;


	printf("\n");
	system("pause");
}