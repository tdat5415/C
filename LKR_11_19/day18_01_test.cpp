#include<stdio.h>
#include<Windows.h>


void main(){
	int* p;
	p =new int[3];
	p[0] =10;
	p[1] =20;
	p[2] =30;
	int count =3;
	//����1) �ε����� ���� �Է¹ް� �߰�
	//��) 1, 40 : 10, 40, 20, 30
	//����2) �ε����� �Է¹ް� ����
	//��) 0 : 40, 20, 30
	int run =1;
	while(run){
		system("cls");
		if(count) for(int i =0; i <count; i++) printf("%d ", p[i]);
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
			printf("���� �Է��Ͻÿ� : ");
			int val;
			scanf_s("%d", &val);

			if(ind <0) ind =0;
			else if(count< ind) ind =count;

			int *temp =p;
			p =new int[count +1];
			for(int i =0; i <ind; i++){
				p[i] =temp[i];
			}
			p[ind] =val;
			for(int i =ind +1; i <=count; i++){
				p[i] =temp[i-1];
			}
			delete temp;
			count++;

		}
		else if(sel ==2 && count){
			printf("�ε����� �Է��Ͻÿ� : ");
			int ind;
			scanf_s("%d", &ind);

			if(ind <0) ind =0;
			else if(count <= ind) ind =count-1;

			int* temp =p;
			p =new int[count -1];
			for(int i =0; i <ind; i++){
				p[i] =temp[i];
			}
			for(int i =ind; i <count-1; i++){
				p[i] =temp[i +1];
			}
			delete temp;
			count--;
		}
		else if(sel ==3) run =0;
	}






	printf("\n");
	system("pause");
}