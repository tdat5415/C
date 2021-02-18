#include<stdio.h>
#include<Windows.h>

void main(){
	int arr[5];
	//arr 배열에 1~5까지 저장후 출력
	int n;
	n = 0;
	while(n<5){
		arr[n] = n + 11;
		printf("%d\n",arr[n]);
		n++;
	}
	printf("\n");

	//홀수만출력
	n = 0;
	while(n<5){
		if(arr[n]&1) printf("%d\n",arr[n]);
		n++;
	}
	printf("\n");

	//전체합출력
	n = 0;
	int total = 0;
	while(n<5){
		total += arr[n];
		n++;
	}
	printf("전체합 : %d\n",total);
	printf("\n");

	//홀수합출력
	n = 0;
	total = 0;
	while(n<5){
		if(arr[n]&1) total += arr[n];
		n++;
	}
	printf("홀수합 : %d\n",total);
	printf("\n");

	//3의 배수의 방번호 출력
	n = 0;
	while(n<5){
		if(arr[n] % 3 == 0) printf("3의배수방번호 : %d\n",n);
		n++;
	}
	printf("\n");
	

	printf("\n");
	system("pause");
}