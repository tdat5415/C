#include<stdio.h>
#include<Windows.h>


void main(){
	int darr[3][4];

	darr[1][2] =400;

	int apt[3][4] ={
		{101, 102, 103, 104},
		{201, 202, 203, 204},
		{301, 302, 303, 304}
	};
	//����1) ��ü���// ��ü �����

	for(int i =0; i <3; i++){
		for(int j =0; j <4; j++){
			printf("%d ",apt[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int tot =0;
	for(int i =0; i <3; i++) for(int j =0; j <4; j++) tot +=apt[i][j];
	printf("tot : %d", tot);
	printf("\n");

	//����2) �ε����� �����
	int ind1, ind2;
	printf("�ε��� �ΰ� �Է� : ");
	scanf_s("%d %d", &ind1, &ind2);
	printf("%d", apt[ind1][ind2]);
	printf("\n");

	//����3) ������ �ε��� ���
	int val;
	printf("�� �Է� : ");
	scanf_s("%d", &val);

	for(int i =0; i <3; i++){
		for(int j =0; j <4; j++){
			if(val ==apt[i][j]){
				ind1 =i;
				ind2 =j;
			}
		}
	}
	printf("%d %d\n", ind1, ind2);

	//����4) ȣ�� �Է��ϸ� ������ ���
	int pay[3][4] ={
		{1000, 1200, 2100, 3100},
		{5001, 1300, 3400, 1230},
		{3301, 3602, 1303, 3504}
	};
	printf("ȣ�� �Է��ϸ� ������ ��� : ");
	scanf_s("%d", &val);

	for(int i =0; i <3; i++){
		for(int j =0; j <4; j++){
			if(val ==apt[i][j]){
				ind1 =i;
				ind2 =j;
			}
		}
	}
	printf("%d\n", pay[ind1][ind2]);

	//����5)������ ���� ���̳���ȣ
	int big1 =0;
	int big2 =0;
	for(int i =0; i <3; i++){
		for(int j =0; j <4; j++){
			if(pay[big1][big2] <= pay[i][j]){
				big1 =i;
				big2 =j;
			}
		}
	}
	printf("���� ���� ���� ȣ %d\n", apt[big1][big2]); 
	//����6)������ ������ �հ�

	tot =0;
	for(int i =0; i <3; i++){
		for(int j =0; j <4; j++){
			tot +=pay[i][j];
			
		}
	}
	printf("�հ� : %d\n", tot); 
	//����7)������ �߸����Դ�. ȣ �ΰ� �Է��ϸ� ������ ��ȯ.
	int a,b,c,d;
	int val1, val2;
	printf("ȣ �ΰ� �Է� : ");
	scanf_s("%d %d", &val1, &val2);
	for(int i =0; i <3; i++){
		for(int j =0; j <4; j++){
			if(val1 ==apt[i][j]){
				a =i;
				b =j;
			}
			else if(val2 ==apt[i][j]){
				c =i;
				d =j;
			}
		}
	}
	printf("%d %d\n", pay[a][b], pay[c][d]);
	pay[a][b] =pay[a][b] ^pay[c][d];
	pay[c][d] =pay[a][b] ^pay[c][d];
	pay[a][b] =pay[a][b] ^pay[c][d];
	printf("%d %d\n", pay[a][b], pay[c][d]);

	printf("\n");
	system("pause");
}