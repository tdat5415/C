#include<stdio.h>
#include<Windows.h>

void main(){
	int arr[5] ={10, 20, 30, 40, 50};
	//���� �Է��ϸ� �ε��� ���
	// ���࿡ ���� ���� �Է������� �޼��� ���
	int _t;
	printf("���� �Է��Ͻÿ� : ");
	scanf_s("%d",&_t);
	int i =0;
	int flag =1;
	while(i <5){
		if(arr[i] == _t){
			flag =0;
			printf("index : %d\n",i);
		}
		i++;
	}
	if(flag) printf("�߸��Է��Ͽ����ϴ�.\n");

	printf("\n");
	system("pause");
}