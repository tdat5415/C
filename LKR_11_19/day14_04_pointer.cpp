#include<stdio.h>
#include<Windows.h>
// ������ // �� �޸𸮱��� //����, ��, ������

void main(){
	int* p;//�ּ�����;
	int a =10;
	int b;
	printf("%d\n", a);
	printf("%d\n", &a);//���ۻ���
	p =&a;
	printf("%d\n", p[0]);//���ۻ���


	printf("\n");
	system("pause");
}