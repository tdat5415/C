#include<stdio.h>
#include<Windows.h>


//합, 갯수, 인값, 값인, 교환, 맥스, 추가, 삭제, 정렬


void main(){
	//배열
	int arr[5] = {10, 20, 30, 40, 50};
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);
	printf("\n");

	int n = 0;
	while(n < 5){
		printf("%d\n", arr[n]);
		n++;
	}
	printf("\n");

	//문제1) 3의 배수만 출력
	n = 0;
	while(n < 5){
		if(arr[n] % 3 == 0) printf("%d\n", arr[n]);
		n++;
	}
	printf("\n");

	//문제2) 3의 배수의 합
	n = 0;
	int tot = 0;
	while(n < 5){
		if(arr[n] % 3 == 0) tot += arr[n];
		n++;
	}
	printf("%d\n",tot);
	printf("\n");

	//문제3) 3의 배수의 갯수
	n = 0;
	int cnt = 0;
	while(n < 5){
		if(arr[n] % 3 == 0) cnt++;
		n++;
	}
	printf("%d\n",cnt);
	printf("\n");

	//문제4) 방번호(index)를 입력하면 값출력 : 1 - 20, 4 - 50
	printf("index 입력 : ");
	scanf_s("%d",&n);
	printf("%d",arr[n]);
	printf("\n");

	//문제5) 값을 입력하면 방번호(index)출력
	int temp;
	printf("값 입력 : ");
	scanf_s("%d",&temp);
	n = 0;
	while(n < 5){
		if(arr[n] == temp) printf("%d",n);
		n++;
	}
	printf("\n");



	printf("\n");
	system("pause");
}