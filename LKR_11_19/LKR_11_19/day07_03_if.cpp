#include<stdio.h>
#include<Windows.h>
#include<time.h>

//if ���� �ɼ�
//else // if���� ������ �����̸� ������ ���� �ȴ�.
//else if // ���������� ���ʴ�� ������ �˻��ؼ� ���� ������ �������� ���õȴ�.

void main(){
	srand(time(NULL));
	int score = 70;
	if(score >= 60) printf("�հ�\n");
	if(score < 60) printf("���հ�\n");

	if(score >= 60) printf("�հ�\n");
	else printf("���հ�\n");





	system("pause");
}