#include<stdio.h>
#include<Windows.h>
// ������ // �� �޸𸮱��� //����, ��, ������

int a;// �޸� data������ ���������.
// ���α׷� ����� �Ҵ�ǰ� ����� �����ȴ�.




void main(){
	int a =10;
	printf("%d\n", a);
	{
		int a =20;
		printf("%d\n", a);
	}
	printf("%d\n", a);


	printf("\n");
	system("pause");
}