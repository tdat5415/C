#include<stdio.h>
#include<Windows.h>


//��, ����, �ΰ�, ����, ��ȯ, �ƽ�, �߰�, ����, ����


void main(){
	//�α��� : id, pw �α���
	// �۱� ; ��� id, �ݾ� : �α��ε� id ���¿��� ����
	int id[3] = {111111, 222222, 333333};
	int pw[3] = {1234, 2345, 3456};
	int balance[3] = {50000, 60000, 70000};
	int my_id, my_pw;
	int flag = 1;//
	int login = 0;
	int i;
	int index;
	int run;
	int sel;
	int _t;

	run =1;
	while(run){
		printf("\n");
		if(login) printf("1. �α׾ƿ�\n");
		else printf("1. �α���\n");
		printf("2. �۱�\n");
		printf("3. ����\n");
		if(login){
			printf("%d�� �α��ε�\n",id[index]);
			printf("���� �ܾ� : %d\n",balance[index]);
		}
		printf("�Է��Ͻÿ� : ");
		scanf_s("%d",&sel);
		if(sel == 1){
			if(login){
				system("cls");
				printf("�α׾ƿ��Ǿ����ϴ�.\n");
				login =0;
			}
			else{
				flag = 1;
				system("cls");
				printf("���̵� �Է��Ͻÿ� : ");
				scanf_s("%d",&my_id);
				i = 0;
				while(i < 3){
					if(my_id == id[i]){
						index =i;
						flag =0;
					}
					i++;
				}
				if(flag){
					system("cls");
					printf("���̵� �����ϴ�.\n");
				}
				else{
					system("cls");
					printf("����� �Է��Ͻÿ� : ");
					scanf_s("%d",&my_pw);
					system("cls");
					if(my_pw != pw[index]) printf("����� ��ġ�����ʽ��ϴ�. \n");
					else {
						printf("�α��εǾ����ϴ�.\n");
						login =1;
					}
				}
			}
		}
		else if(sel ==2){
			if(login){
				system("cls");
				printf("��� id�� �Է��Ͻÿ� : ");
				scanf_s("%d",&_t);
				i = 0;
				flag =1;
				while(i < 3){
					if(_t == id[i]){
						flag =0;
						system("cls");
						printf("�����ݾ��� �Է��Ͻÿ� : ");
						scanf_s("%d",&_t);
						balance[index] -=_t;
						balance[i] +=_t;
						system("cls");
						printf("�ԱݵǾ����ϴ�.\n");
					}
					i++;
				}
				if(flag){
					system("cls");
					printf("���̵� �����ϴ�.\n");
				}
			}
			else{
				system("cls");
				printf("�α����� �Ͻÿ�.\n");
			}

		}
		else if(sel ==3) run =0;
		else{
			system("cls");
			printf("�߸� �Է��Ͽ����ϴ�.\n");
		}
	}



	printf("\n");
	system("pause");
}