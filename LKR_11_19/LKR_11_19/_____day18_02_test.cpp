#include<stdio.h>
#include<Windows.h>


void main(){
	int** pp =new int*[0];
	int count =0;
	int run =1;
	while(run){
		system("cls");
		if(count) for(int i =0; i <count; i++) printf("%d %d\n", pp[i][0], pp[i][1]);
		printf("\n");

		printf("1. �߰�\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("�Է��Ͻÿ� : ");
		int sel;
		scanf_s("%d", &sel);
		if(sel ==1){
			printf("�ε����� �Է��Ͻÿ� : ");
			int ind;
			scanf_s("%d", &ind);
			printf("��ȣ�� �Է��Ͻÿ� : ");
			int num;
			scanf_s("%d", &num);
			printf("���� �Է��Ͻÿ� : ");
			int val;
			scanf_s("%d", &val);

			if(ind <0) ind =0;
			else if(count< ind) ind =count;

			int **temp =pp;
			pp =new int*[count +1];
			for(int i =0; i <ind; i++){
				pp[i] =temp[i];
			}
			pp[ind] =new int[2];
			pp[ind][0] =num;
			pp[ind][1] =val;
			for(int i =ind +1; i <=count; i++){
				pp[i] =temp[i-1];
			}
			delete temp;//temp�� ����Ű�� pp���� ���� �迭 ����
			count++;

		}
		else if(sel ==2 && count){
			printf("�ε����� �Է��Ͻÿ� : ");
			int ind;
			scanf_s("%d", &ind);

			if(ind <0) ind =0;
			else if(count <= ind) ind =count-1;

			int** temp =pp;
			pp =new int*[count -1];
			for(int i =0; i <ind; i++){
				pp[i] =temp[i];
			}
			for(int i =ind; i <count-1; i++){
				pp[i] =temp[i +1];
			}
			delete temp[ind];//��ȣ�� ������ ����ִ� �迭 ����
			delete temp;//pp���� �ϳ� ū �迭 ����
			count--;
		}
		else if(sel ==3) run =0;
	}






	printf("\n");
}