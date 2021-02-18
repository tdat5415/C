#include<stdio.h>
#include<Windows.h>
#include<time.h>


void main(){
	srand(time(0));
	int a =clock();//현재시간
	int val;
	int num[9] ={1,2,3,4,5,6,7,8,9};
	int R;
	int max =10;
	int cnt =1;
	for(int i =0; i <100; i++){
		R =rand()%8 +1;
		num[0] =num[0] ^num[R];
		num[R] =num[0] ^num[R];
		num[0] =num[0] ^num[R];
	}

	while(1){
		system("cls");
		for(int i =0; i <9; i++){
			if(i %3 ==0 && i >0){
				printf("\n");
			}
			if(num[i]) printf("%2d ", num[i]);
			else printf("   ");
		}
		printf("\n");
		printf("%d의 인덱스 입력 : ", cnt);
		scanf_s("%d", &val);
		if(cnt ==num[val]) {
			cnt++;
			if(max <=15) num[val] =max++;
			else num[val] =0;
		}


		int flag =1;
		for(int i =0; i <9; i++) if(num[i]) flag =0;
		if(flag) break;
	}
	printf("\n");
	printf("\n");
	int b =clock();//현재시간
	printf("걸린시간 : %.3lfs\n", (b -a)/1000.0);

	printf("\n");
	system("pause");
}
