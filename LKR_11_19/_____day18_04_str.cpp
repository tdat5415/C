#include<stdio.h>
#include<Windows.h>


void main(){
	char ttt[100];
	char** names =new char*[0];
	int count =0;
	int run =1;
	while(run){
		system("cls");
		if(count) for(int i =0; i <count; i++) printf("%s\n", names[i]);
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
			printf("�̸��� �Է��Ͻÿ� : ");
			scanf_s("%s", ttt, 100);
			int len =strlen(ttt);

			if(ind <0) ind =0;
			else if(count< ind) ind =count;

			char **temp =names;
			names =new char*[count +1];
			for(int i =0; i <ind; i++){
				names[i] =temp[i];
			}

			names[ind] =new char[len +1];
			strcpy_s(names[ind], len +1, ttt);

			for(int i =ind +1; i <=count; i++){
				names[i] =temp[i-1];
			}
			delete temp;//temp�� ����Ű�� names���� ���� �迭 ����
			count++;

		}
		else if(sel ==2 && count){
			printf("�ε����� �Է��Ͻÿ� : ");
			int ind;
			scanf_s("%d", &ind);

			if(ind <0) ind =0;
			else if(count <= ind) ind =count-1;

			char** temp =names;
			names =new char*[count -1];
			for(int i =0; i <ind; i++){
				names[i] =temp[i];
			}
			for(int i =ind; i <count-1; i++){
				names[i] =temp[i +1];
			}
			delete temp[ind];//�̸��� ����ִ� �迭 ����
			delete temp;//names���� �ϳ� ū �迭 ����
			count--;
		}
		else if(sel ==3) run =0;
	}






	printf("\n");
}