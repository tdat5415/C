#include<stdio.h>
#include<Windows.h>


//��, ����, �ΰ�, ����, ��ȯ, �ƽ�, �߰�, ����, ����


void main(){
	int id[3] = {111111, 222222, 333333};
	int pw[3] = {1234, 5678, 6789};
	int score[3] = {30, 50, 70};
	int my_id, my_pw;
	int flag = 0;
	int i;
	int index;
	//�α����ϰ� ���� ���
	printf("���̵� �Է��Ͻÿ� : ");
	scanf_s("%d",&my_id);
	flag = 1;
	i = 0;
	while(i < 3){
		if(my_id == id[i]){
			flag = 0;
			index = i;
		}
		i++;
	}
	if(flag == 0){
		printf("����� �Է��Ͻÿ� : ");
		scanf_s("%d",&my_pw);
		if(my_pw == pw[index]) printf("%d ���� ���� : %d\n",id[index],score[index]);
		else printf("����� ��ġ���� �ʽ��ϴ�.\n");
	}
	else printf("���̵� �����ϴ�.\n");
	printf("\n");

	// �հ��� ���̵� ��� : ����(60���̻�)
	printf("===�հ��� ���===\n");
	i = 0;
	while(i < 3){
		if(score[i] >= 60) printf("%d ��\n",id[i]);
		i++;
	}
	printf("\n");



	printf("\n");
	system("pause");
}