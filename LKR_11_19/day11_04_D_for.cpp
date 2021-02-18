#include<stdio.h>
#include<Windows.h>


void main(){
	for(int i =0; i <5; i++){
		for(int j =0; j <3; j++){
			printf("%d %d\n", i, j);
		}
	}

	//구구단 출력
	for(int i =2; i <10; i++){
		for(int j =1; j <10; j++){
			printf("%dX%d=%2d  ", i, j, i*j);
		}
		printf("\n");
	}
	printf("\n");
	//3,4,5단만 
	for(int i =3; i <6; i++){
		for(int j =1; j <10; j++){
			printf("%dX%d=%2d  ", i, j, i*j);
		}
		printf("\n");
	}
	printf("\n");

	//@@@@@
	//@@@@@
	//@@@@@
	//@@@@@
	//@@@@@

	for(int i =0; i <5; i++){
		for(int j =0; j <5; j++){
			printf("@", i, j);
		}
		printf("\n");
	}
	printf("\n");

	printf("\n");
	system("pause");
}