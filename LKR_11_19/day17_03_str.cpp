#include<stdio.h>
#include<Windows.h>
#include<string.h>// 문자열 함수 사용가능
//복사, 비교, 이어붙이기, 길이, 자르기

void main(){
	char temp[100];
	printf("이름을 입력하세요 : ");
	scanf_s("%s", temp, 100);

	int len;
	len =strlen(temp);// 문자열의 길이를 반환한다. : 김철수 : 6
	printf("문자열의 길이 : %d\n", len);

	char* name;
	name =new char[len +1];//문자열(문자배열은 맨 마지막 한칸을 더 만들어야 한다.(0을 저장하기위해서)
	strcpy_s(name, len +1, temp);
	printf("%s\n", name);


	



	printf("\n");
	system("pause");
}