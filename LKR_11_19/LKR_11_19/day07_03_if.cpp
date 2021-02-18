#include<stdio.h>
#include<Windows.h>
#include<time.h>

//if 문의 옵션
//else // if문의 조건이 거짓이면 무조건 실행 된다.
//else if // 위세서부터 차례대로 조건을 검사해서 참이 나오면 나머지는 무시된다.

void main(){
	srand(time(NULL));
	int score = 70;
	if(score >= 60) printf("합격\n");
	if(score < 60) printf("불합격\n");

	if(score >= 60) printf("합격\n");
	else printf("불합격\n");





	system("pause");
}