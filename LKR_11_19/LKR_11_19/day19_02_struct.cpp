#include<stdio.h>
#include<Windows.h>
#include<string.h>


//구조체 (struct) : 사용자 정의자료형
//1) 내장 자료형 : int, double, char, float, long long
//2) 사용자정의 자료형 : 직접만든다 (내장자료형을 조합해서 만든다)
//사용자 정의 자료형
//1. 정의 : 설계도
//	1) struct	 : 키워드
//	2) student	 : 내가 만든 자료형 이름
//	3) {};		 : 자료형 내용
//2. 선언 : 메모리 할당
//3. 사용 : 변수명.(dot) 을 이용해서 사용한다.

struct User{
	char name[100];
	char acc[100];
	int pw;
	int bal;
};


void main(){
	User user[3];
	strcpy_s(user[0].name, 100, "유재석");
	strcpy_s(user[0].acc, 100, "111-111");
	user[0].pw =1234;
	user[0].bal =50000;

	int run =1;
	while(run){
		printf("1. 로그인\n");
		printf("2. 송금\n");
		int sel;
		scanf_s("%d", &sel);
		if(sel ==1){}
	}







	printf("\n");
	system("pause");
}