#include<stdio.h>
#include<Windows.h>


//void test();

void main(){
	//test();
	int* p;
	int a =10;
	p =&a;
	int* p2;
	int b =20;
	p2 =&b;


	//����1) p, p2�� �̿��ؼ� a�� b�� ���� ��ȯ�غ�����

	/*
	int temp;
	temp	=*p;
	*p		=*p2;
	*p2		=temp;
	*/

	*p	=*p ^*p2;
	*p2 =*p ^*p2;
	*p	=*p ^*p2;

	printf("a : %d\n", a);
	printf("b : %d\n", b);




	printf("\n");
	system("pause");
}
