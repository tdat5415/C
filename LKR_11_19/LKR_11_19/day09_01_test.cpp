#include<stdio.h>
#include<Windows.h>
#include<time.h>


void main(){
	srand(time(NULL));
	int arr[5] ={10, 20, 30, 40, 50};
	//�ε����� �����
	//������ �ε������

	int chance[8];
	//���ǿ� 0�̳� 3�� �������� �����Ѵ�.(8��)
	//3�� �������� 3���� ��÷ �ƴϸ� ��
	//33003330 ��÷
	//30330300 ��
	int i =0;
	while(i<8){
		if(rand()%2) chance[i] = 0;
		else chance[i] = 3;
		printf("%d ",chance[i]);
		i++;
	}
	printf("\n");
	int cnt =0;
	int flag =0;
	i =0;
	while(i<8){
		if(chance[i] == 3) cnt++;
		else cnt =0;
		if(cnt >=3) flag =1;
		i++;
	}
	if(flag) printf("��÷\n");
	else printf("��\n");
	printf("\n");



	printf("\n");
	system("pause");
}