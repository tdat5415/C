#include<stdio.h>
#include<Windows.h>


void main(){
	int* p;
	p =new int[3];
	p[0] =10;
	p[1] =20;
	p[2] =30;
	int count =3;
	//문제1) 인덱스와 값을 입력받고 추가
	//예) 1, 40 : 10, 40, 20, 30
	//문제2) 인덱스를 입력받고 삭제
	//예) 0 : 40, 20, 30
	int run =1;
	while(run){
		system("cls");
		if(count) for(int i =0; i <count; i++) printf("%d ", p[i]);
		printf("\n");

		printf("1. 추가\n");
		printf("2. 삭제\n");
		printf("3. 종료\n");
		printf("입력하시오 : ");
		int sel;
		scanf_s("%d", &sel);
		if(sel ==1){
			printf("인덱스를 입력하시오 : ");
			int ind;
			scanf_s("%d", &ind);
			printf("값을 입력하시오 : ");
			int val;
			scanf_s("%d", &val);

			if(ind <0) ind =0;
			else if(count< ind) ind =count;

			int *temp =p;
			p =new int[count +1];
			for(int i =0; i <ind; i++){
				p[i] =temp[i];
			}
			p[ind] =val;
			for(int i =ind +1; i <=count; i++){
				p[i] =temp[i-1];
			}
			delete temp;
			count++;

		}
		else if(sel ==2 && count){
			printf("인덱스를 입력하시오 : ");
			int ind;
			scanf_s("%d", &ind);

			if(ind <0) ind =0;
			else if(count <= ind) ind =count-1;

			int* temp =p;
			p =new int[count -1];
			for(int i =0; i <ind; i++){
				p[i] =temp[i];
			}
			for(int i =ind; i <count-1; i++){
				p[i] =temp[i +1];
			}
			delete temp;
			count--;
		}
		else if(sel ==3) run =0;
	}






	printf("\n");
	system("pause");
}