#include<stdio.h>
#include<Windows.h>
#include<time.h>


void main(){
	//문제1) com에 10~19 사이의 랜덤 숫자 3개 저장( 겹치지않게)
	//방법 : arr[10]을 셔플후 앞에 3개를 com에 저장
	srand(time(NULL));
	int com[3];
	int arr[10] ={10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

	int temp;
	int i =0;
	while(i <100){
		temp =rand() %9 +1;
		arr[0] =arr[0] ^arr[temp];
		arr[temp] =arr[0] ^arr[temp];
		arr[0] =arr[0] ^arr[temp];
		i++;
	}
	
	i =0;
	while(i <10){
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");

	i =0;
	while(i <3){
		com[i] =arr[i];
		printf("%d ", com[i]);
		i++;
	}
	printf("\n");



	printf("\n");
	system("pause");
}