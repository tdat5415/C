#include<stdio.h>
#include<time.h>
#include<Windows.h>
//���ھ߱�//
//1) com�� 0~9 ���� �������� 3�� ����(���� �ߺ� ���� ����)// num�� ������ �տ� 3�� ����
//2) me �� 0~9 ������ ���� 3���� ���Ƿ� �Է��Ѵ�.
//3) me �� com�� ���ڸ� ���⶧���� �ݺ�
//4) com�� ��Ʈ�� �ش�. ���ڿ� �ڸ��� ������ strike ++;���ڸ� ������ ball++;

void main(){
	int num[10] ={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int com[3];
	int me[3];
	int strk =0;
	int ball =0;
	int R;
	srand(time(NULL));
	
	for(int i =0; i <100; i++){						//���� ���� ���
		R =rand() %9 +1;
		num[0] =num[0] ^num[R];
		num[R] =num[0] ^num[R];
		num[0] =num[0] ^num[R];
	}
	for(int i=0; i <3; i++) com[i] =num[i];
	for(int i =0; i <3; i++) printf("%d ",com[i]);
	printf("\n");printf("\n");

	int run =1;
	int flag;
	while(run){
		ball =0;
		strk =0;
		printf("0~9 ���� �Է� : ");
		scanf("%d %d %d", &me[0], &me[1], &me[2]);	//���� �Է�

		flag =0;
		for(int i =0; i <3; i++){					//�ߺ�����, ���� �� ���� üũ
			if(me[i] <0 || me[i] >9) flag =1;
			if(me[i] == me[(i+1)%3]) flag =1;
		}
		if(flag) continue;

		for(int i =0; i <3; i++){					//ball,strike ī��Ʈ
			for(int j =0; j <3; j++){
				if(me[i] ==com[j]){
					if(i ==j) strk++;
					else ball++;
				}
			}
		}
		if(strk ==3){
			printf("����\n");
			run =0;
		}
		else{
			printf("strk : %d\nball : %d\n", strk, ball);
		}
	}



	printf("\n");
	system("pause");
}