#include<stdio.h>
#include<Windows.h>
#include<time.h>

//��, ����, �ΰ�, ����, ��ȯ, �ƽ�, �߰�, ����, ����


void main(){
	srand(time(NULL));
	int OMR[5] = {1, 3, 2, 4, 3};
	int st_OMR[5];
	int score =0;
	// st_OMR�� �������� (1~5)5�� ���� �����Ѵ�.
	// OMR �� ���ؼ� ���� ��� 1������ 20��
	// o x o o o �̷������� ���
	int i =0;
	while(i <5){
		st_OMR[i] = rand() %5 +1;
		i++;
	}
	i =0;
	while(i <5){
		if(OMR[i] == st_OMR[i]){
			printf("O ");
			score += 20;
		}
		else printf("X ");
		i++;
	}
	printf("\n");
	printf("���� : %d",score);
	printf("\n");


	printf("\n");
	system("pause");
}