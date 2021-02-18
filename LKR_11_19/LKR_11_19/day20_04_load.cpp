#include<stdio.h>
#include<Windows.h>
#include<string.h>



void main(){
	char data_name[100] ={0};
	char data_age[100] ={0};	




	FILE*f;//하드디크스 주소
	fopen_s(&f, "name.txt", "wt"); //1. 주소, 2. 저장할 파일 이름, 3. "wt" : write txt
	fgets(data_name, 100, f);
	fclose(f);

	fopen_s(&f, "age.txt", "wt"); //1. 주소, 2. 저장할 파일 이름, 3. "wt" : write txt
	fgets(data_age, 100, f);
	fclose(f);




	printf("%s\n", data_name);
	printf("%s\n", data_age);







	printf("\n");
	system("pause");
}