#include<stdio.h>
#include<Windows.h>
#include<time.h>

//���� sort

void main(){
	// �Ҽ� ������ ã�� : 2�̻��� ���ڸ� �Է��Ԥ� 2~ �׼��ڱ����� ��� �Ҽ� ���
	int val;
	printf("���ڸ� �Է��Ͻÿ�(2�̻�) : ");
	scanf_s("%d", &val);
	for(int i =2; i <=val; i++){
		int flag =1;
		for(int j =2; j <i; j++){//2 ~ i-1���� ������
			if(i %j ==0) flag =0;
		}
		if(flag) printf("%d ", i);
	}
	printf("\n");printf("\n");



	int arr[5] ={20, 30, 10, 50, 40};//ū ������� ����
	for(int i =0; i <5; i++){
		for(int j =0; j <4-i; j++){
			if(arr[j] < arr[j+1]){//������ ����ã�Ƽ� �ǵڷ�
				arr[j] = arr[j] ^ arr[j +1];
				arr[j +1] = arr[j] ^ arr[j +1];
				arr[j] = arr[j] ^ arr[j +1];
			}
		}

	}
	for(int i =0; i <5; i++) printf("%d ", arr[i]);
	printf("\n");


	printf("\n");
	system("pause");
}
