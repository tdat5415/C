#include<stdio.h>
#include<Windows.h>


void main(){
	int max;
	int num[5] ={1001, 1002, 1003, 1004, 1005};
	int score[5] ={10, 40, 30, 100, 54};
	//����1) ���� ū ���� ���
	//max�� ù��° ���� �����Ѵ�.
	//max�� �������� ���ϸ鼭 ���������� max���� ũ�� max�� ���� ū������ ���� ; ������ �ݺ�
	printf("num : ");
	int i =0;
	while(i <5){
		printf("%d ",num[i]);
		i++;
	}
	printf("\n");

	printf("score : ");
	i =0;
	while(i <5){
		printf("%d ",score[i]);
		i++;
	}
	printf("\n");



	i =1;
	while(i <5){
		if(score[i-1] >=score[i]){
			score[i] =score[i-1] ^score[i];
			score[i-1] =score[i-1] ^score[i];
			score[i] =score[i-1] ^score[i];

			num[i] =num[i-1] ^num[i];
			num[i-1] =num[i-1] ^num[i];
			num[i] =num[i-1] ^num[i];
		}
		
		i++;
	}

	printf("num : ");
	i =0;
	while(i <5){
		printf("%d ",num[i]);
		i++;
	}
	printf("\n");

	printf("score : ");
	i =0;
	while(i <5){
		printf("%d ",score[i]);
		i++;
	}
	printf("\n");

	printf("max : %d\n", score[4]);


	//����2) 1�� �л� ��ȣ ��� 
	printf("1���ȣ : %d\n", num[4]);

	//����3) 2��?
	printf("2���ȣ : %d\n", num[3]);




	// me�� com�� 0~9�� �����ư��鼭 �Է��Ѵ�.
	//me�� �����Է¹ް�, com�� ������ ����Ѵ�.
	//���� : �ߺ����ڱ���

	printf("\n");printf("\n");printf("\n");
	int me, com;
	int _N[10] ={0};
	int run =0;
	int cnt;
	int temp;
	while(run <5){
		i =0;
		while(i <10){
			if(_N[i] ==1) printf("%d ",i);
			i++;
		}
		printf("\n");
		printf("0~9�� �ȳ��¼��� �ϳ� ���ÿ� : ");
		scanf_s("%d", &me);
		printf("me : %d\n", me);
		_N[me] =1;

		cnt =0;
		i =0;
		while(i <10){
			if(_N[i] ==0) cnt++;
			i++;
		}
		temp =rand() %cnt +1;
		i =0;
		while(i <10){
			if(_N[i] ==0) temp--;
			if(temp ==0){
				com =i;
				i =10;
			}
			i++;
		}
		_N[com] =1;
		printf("com : %d\n", com);

		run++;
	}



	printf("\n");
	system("pause");
}