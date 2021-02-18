#include<stdio.h>
#include<Windows.h>

void main(){
	int* p;
	p =new int[3];
	int count =3;
	p[0] =10;
	p[1] =20;
	p[2] =30;

	//추가 인덱스와 값을 입력받고 추가
	//예) 0, 40 : 40, 10, 20, 30
	printf("인덱스와 값을 입력하시오 : ");
	int ind, val;
	scanf_s("%d %d", &ind, &val);
	int* temp =p;

	p =new int[++count];

	for(int i =0; i <ind; i++){//인덱스 앞에 값 복사
		p[i] =temp[i];
	}
	p[ind] =val;//가운데값
	for(int i =ind +1; i <count; i++){//인덱스 뒤에값 복사
		p[i] =temp[i-1];
	}
	delete [] temp;
	
	for(int i =0; i <count; i++){//출력
		printf("%d ", p[i]);
	}
	printf("\n");
	printf("\n");
	//삭제 인덱스를 입력받고 삭제
	
	printf("삭제할 인덱스를 입력하시오 : ");
	scanf_s("%d", &ind);
	temp =p;

	p =new int[--count];

	for(int i =0; i <ind; i++){//인덱스 앞에 값 복사
		p[i] =temp[i];
	}
	for(int i =ind; i <count; i++){//인덱스 뒤에값 복사
		p[i] =temp[i+1];
	}
	delete [] temp;
	
	for(int i =0; i <count; i++){//출력
		printf("%d ", p[i]);
	}




	printf("\n");
	system("pause");
}
