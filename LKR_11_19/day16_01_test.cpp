#include<stdio.h>
#include<Windows.h>


//�����Ҵ�
//1) new : Ű���� : �޸𸮿��� heap�� ����
//2) int : �ڷ�ũ��

//�����Ҵ�����
//1) delete : Ű����
//2) delete p; : p�� �ּҷ� ���� �޸𸮸������Ѵ�.


void main(){
	int a;
	int arr[3];
	int* p;
	new int;
	new int;

	p = new int; //new int �� �޸��ּҰ� p�� ����ȴ�.
	p[0] = 1000;
	p = new int;
	p[0] = 200;
	printf("%d\n", p[0]);
	delete p;


	printf("\n");
	system("pause");
}