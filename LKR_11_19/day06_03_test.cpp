#include<stdio.h>
#include<Windows.h>

void main(){
	//���������
	//5���ֹ��ϰ� ��������� ����,�Ž�����
	int money = 50000;
	printf("==========�Ե�����=========\n");
	printf("1.���� 2000��\n");
	printf("2.�ݶ� 4000��\n");
	printf("3.���� 5000��\n");
	int a=0,b=0,c=0,n=0,temp;
	while(n<5){
		printf("�ֹ��Ͻÿ� : ");
		scanf_s(" %d",&temp);
		if(temp == 1){
			money -= 2000;
			a++;
			n++;
		}
		else if(temp == 2){
			money -= 4000;
			b++;
			n++;
		}
		else if(temp == 3){
			money -= 5000;
			c++;
			n++;
		}
		else printf("�ٽ�");
	}
	printf("=====������=====\n");
	printf("���� : %d��\n",a);
	printf("�ݶ� : %d��\n",b);
	printf("���� : %d��\n",c);
	printf("�Ž����� : %d��\n",money);


	printf("\n");
	system("pause");
}