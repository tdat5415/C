#include<stdio.h>
#include<Windows.h>
#include<string.h>
//���� ������
//�������� �ּҸ������Ҽ� �ִ�.

void main(){
	//��ȣ, ����
	int** pp;
	int count =0;
	int run =1;
	while(run){
		system("cls");
		if(count) for(int i =0; i <count; i++) printf("%d   %d\n", pp[i][0], pp[i][1]);
		printf("1. �߰�\n");
		printf("2. ����\n");
		printf("�Է��Ͻÿ� : ");
		int sel;
		scanf_s("%d", &sel);
		if(sel ==1){
			if(count ==0){
				pp =new int*[1];
			}
			else if(count >0){
				int** temp =pp;
				pp =new int*[count +1];
				for(int i =0; i <count; i++){
					pp[i] =temp[i];//�ּҵ� ����
				}
				delete temp;
				//temp = pp;
			}

			printf("��ȣ�� �Է��ϼ��� : ");
			int num;
			scanf_s("%d", &num);
			printf("������ �Է��ϼ��� : ");
			int sco;
			scanf_s("%d", &sco);

			pp[count] =new int[2];
			pp[count][0] =num;
			pp[count][1] =sco;
			

			count++;
		}
		else if(sel ==2 && count){
			//delete [] pp[count-1];
			int** temp =pp;
			pp =new int*[count -1];
			for(int i =0; i <count-1; i++){
				pp[i] =temp[i];
			}
			delete temp[count -1];//��ȣ�� ��������
			delete temp;//���� pp���� �ϳ� ��ū�迭����

			count--;
		}
	}


	printf("\n");
	system("pause");
}