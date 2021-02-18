#include<stdio.h>
#include<Windows.h>
#include<string.h>


void main(){
	char temp[100];
	char* name;
	printf("동물ㅣ름을 입력하세요 : ");
	scanf_s("%s", temp, 100);

	int len =strlen(temp);
	name =new char[len +1];
	strcpy_s(name, len +1, temp);
	printf("%s\n", name);


	char** names; //추가 삭제;




	printf("\n");
	system("pause");
}