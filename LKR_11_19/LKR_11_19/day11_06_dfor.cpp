#include<stdio.h>
#include<Windows.h>


void main(){
	int darr[3][4];

	darr[1][2] =400;

	int apt[3][4] ={
		{101, 102, 103, 104},
		{201, 202, 203, 204},
		{301, 302, 303, 304}
	};
	//문제1) 전체출력// 전체 합출력

	for(int i =0; i <3; i++){
		for(int j =0; j <4; j++){
			printf("%d ",apt[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int tot =0;
	for(int i =0; i <3; i++) for(int j =0; j <4; j++) tot +=apt[i][j];
	printf("tot : %d", tot);
	printf("\n");

	//문제2) 인덱스로 값출력
	int ind1, ind2;
	printf("인덱스 두개 입력 : ");
	scanf_s("%d %d", &ind1, &ind2);
	printf("%d", apt[ind1][ind2]);
	printf("\n");

	//문제3) 값으로 인덱스 출력
	int val;
	printf("값 입력 : ");
	scanf_s("%d", &val);

	for(int i =0; i <3; i++){
		for(int j =0; j <4; j++){
			if(val ==apt[i][j]){
				ind1 =i;
				ind2 =j;
			}
		}
	}
	printf("%d %d\n", ind1, ind2);

	//문제4) 호를 입력하면 관리비 출력
	int pay[3][4] ={
		{1000, 1200, 2100, 3100},
		{5001, 1300, 3400, 1230},
		{3301, 3602, 1303, 3504}
	};
	printf("호를 입력하면 관리비 출력 : ");
	scanf_s("%d", &val);

	for(int i =0; i <3; i++){
		for(int j =0; j <4; j++){
			if(val ==apt[i][j]){
				ind1 =i;
				ind2 =j;
			}
		}
	}
	printf("%d\n", pay[ind1][ind2]);

	//문제5)관리비가 가장 많이나온호
	int big1 =0;
	int big2 =0;
	for(int i =0; i <3; i++){
		for(int j =0; j <4; j++){
			if(pay[big1][big2] <= pay[i][j]){
				big1 =i;
				big2 =j;
			}
		}
	}
	printf("가장 많이 나온 호 %d\n", apt[big1][big2]); 
	//문제6)각층별 관리비 합계

	tot =0;
	for(int i =0; i <3; i++){
		for(int j =0; j <4; j++){
			tot +=pay[i][j];
			
		}
	}
	printf("합계 : %d\n", tot); 
	//문제7)관리비가 잘못나왔다. 호 두개 입력하면 관리비 교환.
	int a,b,c,d;
	int val1, val2;
	printf("호 두개 입력 : ");
	scanf_s("%d %d", &val1, &val2);
	for(int i =0; i <3; i++){
		for(int j =0; j <4; j++){
			if(val1 ==apt[i][j]){
				a =i;
				b =j;
			}
			else if(val2 ==apt[i][j]){
				c =i;
				d =j;
			}
		}
	}
	printf("%d %d\n", pay[a][b], pay[c][d]);
	pay[a][b] =pay[a][b] ^pay[c][d];
	pay[c][d] =pay[a][b] ^pay[c][d];
	pay[a][b] =pay[a][b] ^pay[c][d];
	printf("%d %d\n", pay[a][b], pay[c][d]);

	printf("\n");
	system("pause");
}