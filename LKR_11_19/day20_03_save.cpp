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
	strcpy_s(p[0].name, 100, "��");
	strcpy_s(p[1].name, 100, "ȣ����");
	strcpy_s(p[2].name, 100, "�罿");

	p[0].age =10;
	p[1].age =20;
	p[2].age =30;

	char data_name[100] ={0};
	char data_age[100] ={0};	
	char itoa_temp[100]; //���ڸ� ���ڷ� ����


	_itoa_s(count, itoa_temp, 10); //1. ����, 2. ����, . 10���� // ���ڸ� ���ڷ� ���淡�� 2�� ������ ����
	strcat(data_name, itoa_temp); //"3"�� �̾� ���δ�.
	//printf("%s\n", data_name); 
	strcat(data_name, "/"); //"/"�� �̾� ���δ�.

	for(int i =0; i <count; i++){
		strcat(data_name, p[i].name);
		if(i !=count -1){//�������� , ����Ǵ°� ����
			strcat(data_name, ",");//�������� �ƴϸ� , �� �ִ´�
		}
	}
	printf("%s\n", data_name);





	_itoa_s(count, itoa_temp, 10); //1. ����, 2. ����, . 10���� // ���ڸ� ���ڷ� ���淡�� 2�� ������ ����
	strcat(data_age, itoa_temp); //"3"�� �̾� ���δ�.
	//printf("%s\n", data_name); 
	strcat(data_age, "/"); //"/"�� �̾� ���δ�.

	for(int i =0; i <count; i++){
		_itoa_s(p[i].age, itoa_temp, 10);
		strcat(data_age, itoa_temp);
		if(i !=count -1){//�������� , ����Ǵ°� ����
			strcat(data_age, ",");//�������� �ƴϸ� , �� �ִ´�
		}
	}
	printf("%s\n", data_age);







	FILE*f;//�ϵ��ũ�� �ּ�
	fopen_s(&f, "name.txt", "wt"); //1. �ּ�, 2. ������ ���� �̸�, 3. "wt" : write txt
	fputs(data_name, f);
	fclose(f);

	fopen_s(&f, "age.txt", "wt"); //1. �ּ�, 2. ������ ���� �̸�, 3. "wt" : write txt
	fputs(data_age, f);
	fclose(f);




	






	printf("\n");
	system("pause");
}