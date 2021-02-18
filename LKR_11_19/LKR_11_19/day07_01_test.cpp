#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(){
	srand(time(NULL));
	// 숫자를 5번 반복 입력하고 그 전체 합  출력
	// 추가조건 무한
	//-100입력하면 종료
	int n = 1;
	int input;
	int total = 0;
	while(n){
		printf("숫자를 입력하시오(종료는-100) : ");
		scanf_s("%d",&input);
		if(input == -100){
			n = 0;
			printf("합계 : %d\n",total);
		}
		total += input;
	}



	printf("\n");
	system("pause");
}