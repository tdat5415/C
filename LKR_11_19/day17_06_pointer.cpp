#include<stdio.h>
#include<Windows.h>
#include<string.h>
//더블 포인터
//포인터의 주소를저장할수 있다.

void main(){
	//번호, 점수
	int** pp;
	int count =0;
	int run =1;
	while(run){
		system("cls");
		if(count) for(int i =0; i <count; i++) printf("%d   %d\n", pp[i][0], pp[i][1]);
		printf("1. 추가\n");
		printf("2. 삭제\n");
		printf("입력하시오 : ");
		int sel;
		scanf_s("%d", &sel);
		if(sel ==1){
			if(count ==0){
				pp =new int*[1];
			}
			else if(count >0){
				int** temp =pp;
				pp =new int*[count +1];
				for(int i =0; i <count; i++){
					pp[i] =temp[i];//주소들 복사
				}
				delete temp;
				//temp = pp;
			}

			printf("번호를 입력하세요 : ");
			int num;
			scanf_s("%d", &num);
			printf("점수를 입력하세요 : ");
			int sco;
			scanf_s("%d", &sco);

			pp[count] =new int[2];
			pp[count][0] =num;
			pp[count][1] =sco;
			

			count++;
		}
		else if(sel ==2 && count){
			//delete [] pp[count-1];
			int** temp =pp;
			pp =new int*[count -1];
			for(int i =0; i <count-1; i++){
				pp[i] =temp[i];
			}
			delete temp[count -1];//번호와 점수제거
			delete temp;//현재 pp보다 하나 더큰배열제거

			count--;
		}
	}


	printf("\n");
	system("pause");
}