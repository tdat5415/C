#include<stdio.h>
#include<Windows.h>

void menu1(int*, int*);
void menu2(int*, int*);
void menu3(int*, int*);

void main(){
	int money =5000;
	int a =0, b =0, c =0;

	for(int i =0; i <5; i++){
		printf("====�Ե�����====\n");
		printf("1. ġ����� 600\n");
		printf("2. ���� 700\n");
		printf("3. �ݶ� 800\n");

		int sel;
		scanf_s("%d", &sel);

		if(sel ==1) menu1(&money, &a);
		else if(sel ==2) menu2(&money, &b);
		else if(sel ==3) menu3(&money, &c);
	}
	printf("�Ž����� : %d\n", money);
	if(a) printf("ġ����� : %d��\n", a);
	if(b) printf("���� : %d��\n", b);
	if(c) printf("�ݶ� : %d��\n", c);



	printf("\n");
	system("pause");
}

void menu1(int* p, int* p2){
	p[0] -=600;
	p2[0] +=1;
}

void menu2(int* p, int* p2){
	p[0] -=700;
	p2[0] +=1;
}

void menu3(int* p, int* p2){
	p[0] -=800;
	p2[0] +=1;
}