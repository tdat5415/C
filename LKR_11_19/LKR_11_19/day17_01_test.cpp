#include<stdio.h>
#include<Windows.h>

void main(){
	int* p;
	p =new int[3];
	int count =3;
	p[0] =10;
	p[1] =20;
	p[2] =30;

	//�߰� �ε����� ���� �Է¹ް� �߰�
	//��) 0, 40 : 40, 10, 20, 30
	printf("�ε����� ���� �Է��Ͻÿ� : ");
	int ind, val;
	scanf_s("%d %d", &ind, &val);
	int* temp =p;

	p =new int[++count];

	for(int i =0; i <ind; i++){//�ε��� �տ� �� ����
		p[i] =temp[i];
	}
	p[ind] =val;//�����
	for(int i =ind +1; i <count; i++){//�ε��� �ڿ��� ����
		p[i] =temp[i-1];
	}
	delete [] temp;
	
	for(int i =0; i <count; i++){//���
		printf("%d ", p[i]);
	}
	printf("\n");
	printf("\n");
	//���� �ε����� �Է¹ް� ����
	
	printf("������ �ε����� �Է��Ͻÿ� : ");
	scanf_s("%d", &ind);
	temp =p;

	p =new int[--count];

	for(int i =0; i <ind; i++){//�ε��� �տ� �� ����
		p[i] =temp[i];
	}
	for(int i =ind; i <count; i++){//�ε��� �ڿ��� ����
		p[i] =temp[i+1];
	}
	delete [] temp;
	
	for(int i =0; i <count; i++){//���
		printf("%d ", p[i]);
	}




	printf("\n");
	system("pause");
}
