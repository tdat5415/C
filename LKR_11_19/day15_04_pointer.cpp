#include<stdio.h>
#include<Windows.h>

void test(int*);

void main(){
	int a[5] ={10, 20, 30, 40, 50};
	int* a_p;

	a_p =a;
	printf("size : %d\n", sizeof(a));
	printf("size : %d\n", sizeof(a_p));
	//a_p[0] =200;
	//*(a_p +1) =300;

	//printf("%d %d\n", a_p, a_p +1);

	test(a_p);

	for(int i =0; i <5; i++){
		printf("%d\n", a_p[i]);
	}

	//�Լ��� ��������(���ڴ� a)
	//�ε����� �Է¹ް� �ش簪�� 1000���� ����




	printf("\n");
	system("pause");
}

void test(int* a_p){
	printf("�ε��� �Է� : ");
	int ind;
	scanf_s("%d", &ind);
	a_p[ind] =1000;


}