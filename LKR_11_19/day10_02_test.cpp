#include<stdio.h>
#include<Windows.h>
#include<time.h>



void main(){
	//�̴� ������//p1�� p2�� 1~3�� �Է� : ���ڸ�ŭ ���������� �̵�
	// p1�� 1 p2 �� 2 �� ǥ��
	// ������ 0��ġ���� �����Ѵ�. ������ 0���� ���ư���.
	int p1[10] ={0};
	int p2[10] ={0};
	int game[10] ={0,1,2,3,4,5,6,7,8,9};

	p1[0] =1;
	p2[0] =2;
	int loc_1 =0;
	int loc_2 =0;

	int i;
	int run =1;
	int turn =1;
	int val;
	while(run){
		i =0;
		while(i <10){
			printf("%d ",game[i]);
			i++;
		}
		printf("\n");
		i =0;
		while(i <10){
			printf("%d ",p1[i]);
			i++;
		}
		printf("\n");
		i =0;
		while(i <10){
			printf("%d ",p2[i]);
			i++;
		}
		printf("\n");

		if(turn ==1){
			printf("1p ���� : ");
			scanf_s("%d", &val);
			if(val <1) val =1;
			else if(val >3) val =3;

			p1[loc_1] =0;
			loc_1 +=val;
			if(loc_1 <10) p1[loc_1] =1;
			else printf("1p win\n"), run =0;

			if(loc_1 ==loc_2){
				p2[loc_2] =0;
				loc_2 =0;
				p2[loc_2] =2;
			}

			turn =2;
		}
		else if(turn ==2){
			printf("2p ���� : ");
			scanf_s("%d", &val);
			if(val <1) val =1;
			else if(val >3) val =3;

			p2[loc_2] =0;
			loc_2 +=val;
			if(loc_2 <10) p2[loc_2] =2;
			else printf("2p win\n"), run =0;

			if(loc_1 ==loc_2){
				p1[loc_1] =0;
				loc_1 =0;
				p1[loc_1] =1;
			}

			turn =1;
		}
	}



	printf("\n");
	system("pause");
}