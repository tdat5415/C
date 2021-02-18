#include<stdio.h>
#include<Windows.h>
#include<string.h>


struct ANI{
	char name[100];
	int age;
};



void main(){
	int count =3;
	ANI*p;
	p =new ANI[count];
	strcpy_s(p[0].name, 100, "말");
	strcpy_s(p[1].name, 100, "호랑이");
	strcpy_s(p[2].name, 100, "사슴");

	p[0].age =10;
	p[1].age =20;
	p[2].age =30;

	char data_name[100] ={0};
	char data_age[100] ={0};	
	char itoa_temp[100]; //숫자를 문자로 변경


	_itoa_s(count, itoa_temp, 10); //1. 숫자, 2. 문자, . 10진수 // 숫자를 문자로 변경래서 2번 변수에 저장
	strcat(data_name, itoa_temp); //"3"을 이어 붙인다.
	//printf("%s\n", data_name); 
	strcat(data_name, "/"); //"/"을 이어 붙인다.

	for(int i =0; i <count; i++){
		strcat(data_name, p[i].name);
		if(i !=count -1){//마지막에 , 저장되는걸 방지
			strcat(data_name, ",");//마지막이 아니면 , 를 넣는다
		}
	}
	printf("%s\n", data_name);





	_itoa_s(count, itoa_temp, 10); //1. 숫자, 2. 문자, . 10진수 // 숫자를 문자로 변경래서 2번 변수에 저장
	strcat(data_age, itoa_temp); //"3"을 이어 붙인다.
	//printf("%s\n", data_name); 
	strcat(data_age, "/"); //"/"을 이어 붙인다.

	for(int i =0; i <count; i++){
		_itoa_s(p[i].age, itoa_temp, 10);
		strcat(data_age, itoa_temp);
		if(i !=count -1){//마지막에 , 저장되는걸 방지
			strcat(data_age, ",");//마지막이 아니면 , 를 넣는다
		}
	}
	printf("%s\n", data_age);







	FILE*f;//하드디크스 주소
	fopen_s(&f, "name.txt", "wt"); //1. 주소, 2. 저장할 파일 이름, 3. "wt" : write txt
	fputs(data_name, f);
	fclose(f);

	fopen_s(&f, "age.txt", "wt"); //1. 주소, 2. 저장할 파일 이름, 3. "wt" : write txt
	fputs(data_age, f);
	fclose(f);




	






	printf("\n");
	system("pause");
}