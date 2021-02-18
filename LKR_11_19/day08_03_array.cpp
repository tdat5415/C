#include<stdio.h>
#include<Windows.h>


//합, 갯수, 인값, 값인, 교환, 맥스, 추가, 삭제, 정렬


void main(){
	int id[3] = {111111, 222222, 333333};
	int pw[3] = {1234, 5678, 6789};
	int score[3] = {30, 50, 70};
	int my_id, my_pw;
	int flag = 0;
	int i;
	int index;
	//로그인하고 점수 출력
	printf("아이디를 입력하시오 : ");
	scanf_s("%d",&my_id);
	flag = 1;
	i = 0;
	while(i < 3){
		if(my_id == id[i]){
			flag = 0;
			index = i;
		}
		i++;
	}
	if(flag == 0){
		printf("비번을 입력하시오 : ");
		scanf_s("%d",&my_pw);
		if(my_pw == pw[index]) printf("%d 님의 점수 : %d\n",id[index],score[index]);
		else printf("비번이 일치하지 않습니다.\n");
	}
	else printf("아이디가 없습니다.\n");
	printf("\n");

	// 합격자 아이디 출력 : 기준(60점이상)
	printf("===합격자 명단===\n");
	i = 0;
	while(i < 3){
		if(score[i] >= 60) printf("%d 님\n",id[i]);
		i++;
	}
	printf("\n");



	printf("\n");
	system("pause");
}