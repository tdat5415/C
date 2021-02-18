#include<stdio.h>
#include<Windows.h>
#include<time.h>

//합, 갯수, 인값, 값인, 교환, 맥스, 추가, 삭제, 정렬


void main(){
	srand(time(NULL));
	int OMR[5] = {1, 3, 2, 4, 3};
	int st_OMR[5];
	int score =0;
	// st_OMR에 랜덤으로 (1~5)5개 값을 저장한다.
	// OMR 과 비교해서 점수 출력 1문제당 20점
	// o x o o o 이런식으로 출력
	int i =0;
	while(i <5){
		st_OMR[i] = rand() %5 +1;
		i++;
	}
	i =0;
	while(i <5){
		if(OMR[i] == st_OMR[i]){
			printf("O ");
			score += 20;
		}
		else printf("X ");
		i++;
	}
	printf("\n");
	printf("점수 : %d",score);
	printf("\n");


	printf("\n");
	system("pause");
}