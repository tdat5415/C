#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(){
	srand(time(NULL));
	// ���ڸ� 5�� �ݺ� �Է��ϰ� �� ��ü ��  ���
	// �߰����� ����
	//-100�Է��ϸ� ����
	int n = 1;
	int input;
	int total = 0;
	while(n){
		printf("���ڸ� �Է��Ͻÿ�(�����-100) : ");
		scanf_s("%d",&input);
		if(input == -100){
			n = 0;
			printf("�հ� : %d\n",total);
		}
		total += input;
	}



	printf("\n");
	system("pause");
}