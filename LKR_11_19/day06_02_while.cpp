#include<stdio.h>
#include<Windows.h>

void main(){
	//0~10 ��ü��
	int total = 0, n = 0;
	while(n<11) total += n++;
	printf("%d\n",total);
	printf("\n");

	//0~10 Ȧ����
	total = 0, n = 0;
	while(n<11){
		if(n&1) total += n;
		n++;
	}
	printf("%d\n",total);
	printf("\n");

	//0~10 Ȧ������
	total = 0, n = 0;
	while(n<11){
		if(n&1) total ++;
		n++;
	}
	printf("%d\n",total);
	printf("\n");

	


	printf("\n");
	system("pause");
}