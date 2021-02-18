#include<stdio.h>
#include<Windows.h>


void main(){
	int move[8] ={0, 2, 0, 0, 8, 0, 0, 2};
	//플레이어는 8이다
	//숫자 1이나 2를 입력받으면 왼쪽 오른쪽 으로 이동
	//조건 (2는 벽이다) 이동불가
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

		printf("왼쪽 1, 오른쪽 2 : ");
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