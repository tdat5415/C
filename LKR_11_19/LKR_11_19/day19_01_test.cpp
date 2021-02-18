#include<stdio.h>
#include<Windows.h>
#include<string.h>

void pppp(int** p_p);

void main(){
	int* p;
	pppp(&p);
	p[0] =10;
	p[1] =20;
	p[2] =30;


	for(int i =0; i <3; i++){
		printf("%d\n", p[i]);
	}




	printf("\n");
	system("pause");
}

void pppp(int** p_p){
	*p_p =new int[3];
}