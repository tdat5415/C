#include<stdio.h>
#include<Windows.h>


void main(){
	//@@@@@
	//@@@@@
	//@@@@@
	//@@@@@
	//@@@@@
	for(int i =0; i <5; i++){
		for(int j =0; j <5; j++){
			printf("@");
		}
		printf("\n");
	}
	printf("\n");

	//@
	//@@
	//@@@
	//@@@@
	//@@@@@
	for(int i =0; i <5; i++){
		for(int j =0; j <=i; j++){
			printf("@");
		}
		printf("\n");
	}
	printf("\n");

	//@@@@@
	//@@@@
	//@@@
	//@@
	//@
	for(int i =0; i <5; i++){
		for(int j =0; j <5 -i; j++){
			printf("@");
		}
		printf("\n");
	}
	printf("\n");

	//    @
	//   @@
	//  @@@
	// @@@@
	//@@@@@
	for(int i =0; i <5; i++){
		for(int j =0; j <5; j++){
			if(j <4-i) printf(" ");
			else printf("@");
		}
		printf("\n");
	}
	printf("\n");

	//@@@@@@@@@
	// @@@@@@@
	//  @@@@@
	//   @@@
	//    @
	for(int i =0; i <5; i++){
		for(int j =0; j <4; j++){
			if(i > j) printf(" ");
			else printf("@@");
		}
		printf("@");
		printf("\n");
	}
	printf("\n");

	printf("\n");
	system("pause");
}