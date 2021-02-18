#include<stdio.h>
#include<Windows.h>


void main(){
	int max;
	int num[5] ={1001, 1002, 1003, 1004, 1005};
	int score[5] ={10, 40, 30, 100, 54};
	//문제1) 가장 큰 점수 출력
	//max에 첫번째 값을 저장한다.
	//max가 나머지와 비교하면서 나머지값이 max보다 크면 max의 값을 큰값으로 저장 ; 끝까지 반복
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


	//문제2) 1등 학생 번호 출력 
	printf("1등번호 : %d\n", num[4]);

	//문제3) 2등?
	printf("2등번호 : %d\n", num[3]);




	// me와 com은 0~9를 번갈아가면서 입력한다.
	//me는 직접입력받고, com은 랜덤을 출력한다.
	//조건 : 중복숫자금지

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
		printf("0~9중 안나온숫자 하나 고르시오 : ");
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