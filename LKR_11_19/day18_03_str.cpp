#include<stdio.h>
#include<Windows.h>
#include<string.h>


void main(){
	char temp[100];
	char* name;
	printf("�����Ӹ��� �Է��ϼ��� : ");
	scanf_s("%s", temp, 100);

	int len =strlen(temp);
	name =new char[len +1];
	strcpy_s(name, len +1, temp);
	printf("%s\n", name);


	char** names; //�߰� ����;




	printf("\n");
	system("pause");
}