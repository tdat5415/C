#include<stdio.h>
#include<Windows.h>

//1. �߰� 2. ���� 3. ���� 4. ���� 5. �ε�


int* add(int* p, int* count_p);
int* del(int* p, int* count_p);
void prt(int* p, int* count_p);

void main(){
	int* p;
	p =new int[1];
	int count =0;

	int run = 1;
	while(run){
		printf("count : %d\n", count);
		printf("1. �߰�\n");
		printf("2. ����\n");
		printf("3. ���\n");
		printf("4. ����\n");
		printf("�����Ͻÿ� : ");
		int sel;
		scanf_s("%d", &sel);

		if(sel ==1) p =add(p, &count);
		else if(sel ==2) p =del(p, &count);
		else if(sel ==3) prt(p, &count);
		else if(sel ==4) run =0;
		else {}

	}


	printf("\n");
	//system("pause");
}

int* add(int* p, int* count_p){
	printf("�߰��� ������ �Է��ϼ��� : ");
	int score;
	scanf_s("%d", &score);
	int* temp = p;
	p = new int[*count_p + 1];
	for(int i = 0; i < *count_p; i++){//12,13,14,-197953
		p[i] = temp[i];
	}
	delete [] temp;
	p[*count_p] = score;//12,13,14,15

	(*count_p)++;
	system("cls");
	return p;//�ּҰ� �������� ���ּ� ����
}

int* del(int* p, int* count_p){
	printf("������ �ε����� �Է��ϼ��� : ");
	int ind;
	scanf_s("%d", &ind);
	if (ind >= 0 && ind < *count_p) {
		int* temp = p;
		p = new int[*count_p - 1];
		for (int i = 0; i < ind; i++) {
			p[i] = temp[i];
		}
		for (int i = ind + 1; i < *count_p; i++) {
			p[i - 1] = temp[i];
		}
		delete[] temp;

		(*count_p)--;
	}
	system("cls");
	return p;
}

void prt(int* p, int* count_p){
	system("cls");
	if(*count_p) for(int i =0; i < *count_p; i++) printf("%d ", p[i]);
	printf("\n");
}
