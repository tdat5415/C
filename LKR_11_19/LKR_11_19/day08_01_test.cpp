#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(){
	srand(time(NULL));
	//�ýð���
	//1. �ӵ� : 1~3����
	//2. ���� : 0, 1, 2, 3 �ϵ�����
	//3. ���� : �������� �ӵ���ŭ �̵�
	//4. ������ �����ϸ� ���ο� ������ ����(-10~10)
	int x = 0, y = 0, speed = 0, dir = 0;
	int des_x = 7, des_y = -5;
	int run = 1;
	int sel;
	while(run){
		printf("===============================\n");
		printf("����ġ : x:%d, y:%d\n", x, y);
		printf("�ӵ� : %d, ���� : %d\n", speed, dir);
		printf("������ : x:%d, y:%d\n",des_x, des_y);
		printf("1. �ӵ�\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("4. ����\n");
		printf("===============================\n");
		printf("�Է��Ͻÿ� : ");
		scanf_s("%d",&sel);
		if(sel == 1){
			printf("�ӵ��� �Է��Ͻÿ�(1~3) : ");
			scanf("%d",&speed);
			if(speed > 3) speed = 3;
			else if(speed < 1) speed = 1;
		}
		else if(sel == 2){
			printf("������ �Է��Ͻÿ�(0,1,2,3�ϵ�����) : ");
			scanf("%d",&dir);
			if(dir > 3) dir = 3;
			else if(dir < 0) dir = 0;
		}
		else if(sel == 3){
			if(dir == 0) y += speed;
			else if(dir == 1) x += speed;
			else if(dir == 2) y -= speed;
			else if(dir == 3) x -= speed;
		}
		else if(sel == 4){
			run = 0;
		}
		else{
			printf("�߸��Է��Ͽ����ϴ�.\n");
		}
		if(des_x == x && des_y == y){
			printf("!!!!!!!!!!!�����Ͽ����ϴ�!!!!!!!!!!\n");
			printf("���ο� ���������� �����Ǿ����ϴ�.\n");
			des_x = rand()%21 - 10;
			des_y = rand()%21 - 10;
		}
	}




	printf("\n");
	system("pause");
}