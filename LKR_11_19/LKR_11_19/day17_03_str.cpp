#include<stdio.h>
#include<Windows.h>
#include<string.h>// ���ڿ� �Լ� ��밡��
//����, ��, �̾���̱�, ����, �ڸ���

void main(){
	char temp[100];
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", temp, 100);

	int len;
	len =strlen(temp);// ���ڿ��� ���̸� ��ȯ�Ѵ�. : ��ö�� : 6
	printf("���ڿ��� ���� : %d\n", len);

	char* name;
	name =new char[len +1];//���ڿ�(���ڹ迭�� �� ������ ��ĭ�� �� ������ �Ѵ�.(0�� �����ϱ����ؼ�)
	strcpy_s(name, len +1, temp);
	printf("%s\n", name);


	



	printf("\n");
	system("pause");
}