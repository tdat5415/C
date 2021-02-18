#include<stdio.h>
#include<Windows.h>
#include<time.h>


void main(){
	int arr[10] ={0};
	int cnt =0;
	int max =0;
	int run =1;
	int temp;
	while(run){
		for(int i =0; i <cnt; i++){
			printf("%d ", arr[i]); 
		}
		printf("\n");
		printf("1. 추가\n");
		printf("2. 삭제\n");
		int sel;
		scanf_s("%d", &sel);
		if(sel ==1){
			printf("값을 입력하시오. : ");
			scanf_s("%d", &temp);
			arr[cnt] =temp;
			if(cnt <10) cnt++;
		}
		else if(sel ==2){
			printf("인덱스를 입력하시오. : ");
			scanf_s("%d", &temp);
			if(0 <=temp <cnt) arr[temp] =0;
			int t;
			t =temp;
			for(;temp +1 < cnt; temp++){
				arr[temp] =arr[temp] ^arr[temp +1];
				arr[temp +1] =arr[temp] ^arr[temp +1];
				arr[temp] =arr[temp] ^arr[temp +1];
			}
			if(0 <cnt && t <cnt) cnt--;
		}
	}



	printf("\n");
	system("pause");
}
