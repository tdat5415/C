#include<stdio.h>
#include<Windows.h>


void main(){
	int move[8] ={0, 2, 0, 0, 8, 0, 0, 2};
	//�÷��̾�� 8�̴�
	//���� 1�̳� 2�� �Է¹����� ���� ������ ���� �̵�
	//���� (2�� ���̴�) �̵��Ұ�
	int _t;
	int i =0;
	int run =1;
	while(run){
		i =0;
		while(i <8){
			printf("%d ",move[i]);
			i++;
		}
		printf("\n");

		printf("���� 1, ������ 2 : ");
		scanf_s("%d",&_t);
		if(_t ==-100) run =0;
		else{
			i =0;
			while(i <8){
				if(move[i] ==8){
					if(_t ==1){
						if(i-1>=0 && move[i-1]!=2){
							move[i] = move[i] ^ move[i-1];
							move[i-1] = move[i] ^ move[i-1];
							move[i] = move[i] ^ move[i-1];
						}
					}
					else if(_t ==2){
						if(i+1<8 && move[i+1]!=2){
							move[i] = move[i] ^ move[i+1];
							move[i+1] = move[i] ^ move[i+1];
							move[i] = move[i] ^ move[i+1];
						}
					}//elif
					i =8;
				}//if

				i++;
			}//while
		}//else

	}




	printf("\n");
	system("pause");
}