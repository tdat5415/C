#include<stdio.h>
#include<Windows.h>

void main(){
	int arr[5] ={10, 20, 30, 40, 50};
	//값을 입력하면 인덱스 출력
	// 만약에 없는 값을 입력했을때 메세지 출력
	int _t;
	printf("값을 입력하시오 : ");
	scanf_s("%d",&_t);
	int i =0;
	int flag =1;
	while(i <5){
		if(arr[i] == _t){
			flag =0;
			printf("index : %d\n",i);
		}
		i++;
	}
	if(flag) printf("잘못입력하였습니다.\n");

	printf("\n");
	system("pause");
}