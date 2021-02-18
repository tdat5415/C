#include<stdio.h>
#include<Windows.h>
#include<time.h>


void main(){
	srand(time(NULL));
	int arr[5] ={10, 20, 30, 40, 50};
	//인덱스로 값출력
	//값으로 인덱스출력

	int chance[8];
	//복권에 0이나 3을 랜덤으로 저장한다.(8번)
	//3이 연속으로 3개면 당첨 아니면 꽝
	//33003330 당첨
	//30330300 꽝
	int i =0;
	while(i<8){
		if(rand()%2) chance[i] = 0;
		else chance[i] = 3;
		printf("%d ",chance[i]);
		i++;
	}
	printf("\n");
	int cnt =0;
	int flag =0;
	i =0;
	while(i<8){
		if(chance[i] == 3) cnt++;
		else cnt =0;
		if(cnt >=3) flag =1;
		i++;
	}
	if(flag) printf("당첨\n");
	else printf("꽝\n");
	printf("\n");



	printf("\n");
	system("pause");
}