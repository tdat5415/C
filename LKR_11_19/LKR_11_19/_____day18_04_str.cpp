#include<stdio.h>
#include<Windows.h>


void main(){
	char ttt[100];
	char** names =new char*[0];
	int count =0;
	int run =1;
	while(run){
		system("cls");
		if(count) for(int i =0; i <count; i++) printf("%s\n", names[i]);
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
			printf("이름을 입력하시오 : ");
			scanf_s("%s", ttt, 100);
			int len =strlen(ttt);

			if(ind <0) ind =0;
			else if(count< ind) ind =count;

			char **temp =names;
			names =new char*[count +1];
			for(int i =0; i <ind; i++){
				names[i] =temp[i];
			}

			names[ind] =new char[len +1];
			strcpy_s(names[ind], len +1, ttt);

			for(int i =ind +1; i <=count; i++){
				names[i] =temp[i-1];
			}
			delete temp;//temp가 가리키는 names보다 작은 배열 삭제
			count++;

		}
		else if(sel ==2 && count){
			printf("인덱스를 입력하시오 : ");
			int ind;
			scanf_s("%d", &ind);

			if(ind <0) ind =0;
			else if(count <= ind) ind =count-1;

			char** temp =names;
			names =new char*[count -1];
			for(int i =0; i <ind; i++){
				names[i] =temp[i];
			}
			for(int i =ind; i <count-1; i++){
				names[i] =temp[i +1];
			}
			delete temp[ind];//이름이 들어있는 배열 삭제
			delete temp;//names보다 하나 큰 배열 삭제
			count--;
		}
		else if(sel ==3) run =0;
	}






	printf("\n");
}