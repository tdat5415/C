#include<stdio.h>
#include<Windows.h>

void main(){
	//����3)���θ� - ���� - ������ ���
	//�����Ƿ� - 1.Ƽ���� 2. ���� 3. �ڷΰ��� // �ڷΰ��� ������ ������ �����Ƿ��� ��� �ӹ��� �־�� �Ѵ�.
	//�����Ƿ� - 1. ġ�� 2. ���� 3. �ڷΰ���
	int run;
	int shop;
	int corner;
	int sel;
	int a=0,b=0,c=0,d=0;//����
	run = 1;
	while(run){
		printf("1. ���θ�\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("��޴��� �̿��ϰڽ��ϱ�? : ");
		scanf_s("%d",&sel);
		printf("\n");
		if(sel == 1){
			shop = 1;
			while(shop){
				printf("1. �����Ƿ�\n");
				printf("2. �����Ƿ�\n");
				printf("3. �ڷΰ���\n");
				printf("��޴��� �̿��ϰڽ��ϱ�? : ");
				scanf_s("%d",&sel);
				printf("\n");
				if(sel == 1){
					corner = 1;
					while(corner){
						printf("1. Ƽ����\n");
						printf("2. ����\n");
						printf("3. �ڷΰ���\n");
						printf("����� �����ϰڽ��ϱ�? : ");
						scanf_s("%d",&sel);
						printf("\n");
						if(sel == 1) a++;
						if(sel == 2) b++;
						if(sel == 3) corner = 0, sel = 0;
					}
				}
				if(sel == 2){
					corner = 1;
					while(corner){
						printf("1. ġ��\n");
						printf("2. ����\n");
						printf("3. �ڷΰ���\n");
						printf("����� �����ϰڽ��ϱ�? : ");
						scanf_s("%d",&sel);
						printf("\n");
						if(sel == 1) c++;
						if(sel == 2) d++;
						if(sel == 3) corner = 0, sel = 0;
					}
				}
				if(sel == 3) shop = 0, sel = 0;
			}
		}
		if(sel == 2){
			printf("====������====\n");
			if(a>0) printf("Ƽ���� : %d\n",a);
			if(b>0) printf("���� : %d\n",b);
			if(c>0) printf("ġ�� : %d\n",c);
			if(d>0) printf("���� : %d\n",d);
			printf("==============\n");
			sel = 0;
			a=0,b=0,c=0,d=0;
		}
		if(sel == 3) run = 0, sel = 0;
	}


	printf("\n");
	system("pause");
}