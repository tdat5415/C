#include<stdio.h>
#include<Windows.h>
#include<time.h>

//정렬 sort

void main(){
	// 소수 여러개 찾기 : 2이상의 숫자를 입력함ㄴ 2~ 그숫자까지의 모든 소수 출력
	int val;
	printf("숫자를 입력하시오(2이상) : ");
	scanf_s("%d", &val);
	for(int i =2; i <=val; i++){
		int flag =1;
		for(int j =2; j <i; j++){//2 ~ i-1까지 나눠봄
			if(i %j ==0) flag =0;
		}
		if(flag) printf("%d ", i);
	}
	printf("\n");printf("\n");



	int arr[5] ={20, 30, 10, 50, 40};//큰 순서대로 정렬
	for(int i =0; i <5; i++){
		for(int j =0; j <4-i; j++){
			if(arr[j] < arr[j+1]){//작은거 먼저찾아서 맨뒤로
				arr[j] = arr[j] ^ arr[j +1];
				arr[j +1] = arr[j] ^ arr[j +1];
				arr[j] = arr[j] ^ arr[j +1];
			}
		}

	}
	for(int i =0; i <5; i++) printf("%d ", arr[i]);
	printf("\n");


	printf("\n");
	system("pause");
}
