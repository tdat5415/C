#include<stdio.h>
#include<Windows.h>
#include<string.h>

//����, �ε�
//���� : RAM(�޸�) �� �ִ� ������ �ϵ��ũ�� �ű�� ��
//�ε� : �ϵ��ũ�� �ִ� ������ RAM���� �ű�� ��
//����ε带 ���ڿ��� �ۿ� �� �� ����.

//�ڸ���, ���ڸ� ���ڷ� ����, ���ڸ� ���ڷ� ����

void main(){
	int a =10; //10 : "10"


	char data[100] ="100/20/30/40"; //csv ','     dot '::'
	//1. �ڸ��� : strtok_s()

	char temp[100];//���� �����
	char*front;
	char*end;
	//strcpy_s(temp, 100, data);
	//front =strtok_s(temp, "/", &end);//1. front : 100     //temp�� �ִ°��� �߶� 1.�ڸ��� temp ���� 2.temp�ּҸ� ��� 3. ������ end���� 
	//strcpy_s(temp, 100, end);

	//printf("%s\n", front);
	//printf("%s\n", temp);
	//printf("%s\n", end);


	strcpy_s(temp, 100, data);
	end =temp;
	int score[4];
	for(int i =0; i <4; i++){
		front =strtok_s(end, "/", &end);
		score[i] =atoi(front);
		printf("%d\n", score[i]);
	}

	/*
	strcpy_s(temp, 100, data);
	int score[4];
	for(int i =0; i <4; i++){
		front =strtok_s(temp, "/", &end);
		score[i] =atoi(front);
		strcpy_s(temp, 100, end);
		printf("%d\n", score[i]);
	}
	*/





	printf("\n");
	system("pause");
}