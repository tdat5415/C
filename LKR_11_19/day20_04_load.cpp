#include<stdio.h>
#include<Windows.h>
#include<string.h>



void main(){
	char data_name[100] ={0};
	char data_age[100] ={0};	




	FILE*f;//�ϵ��ũ�� �ּ�
	fopen_s(&f, "name.txt", "wt"); //1. �ּ�, 2. ������ ���� �̸�, 3. "wt" : write txt
	fgets(data_name, 100, f);
	fclose(f);

	fopen_s(&f, "age.txt", "wt"); //1. �ּ�, 2. ������ ���� �̸�, 3. "wt" : write txt
	fgets(data_age, 100, f);
	fclose(f);




	printf("%s\n", data_name);
	printf("%s\n", data_age);







	printf("\n");
	system("pause");
}