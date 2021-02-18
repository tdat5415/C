#include<stdio.h>
#include<time.h>
#include<Windows.h>
//숫자야구//
//1) com에 0~9 사이 랜덤숫자 3개 저장(조건 중복 숫자 금지)// num을 셔플후 앞에 3개 저장
//2) me 는 0~9 사이의 숫자 3개를 임의로 입력한다.
//3) me 는 com의 숫자를 맞출때까지 반복
//4) com은 힌트를 준다. 숫자오 자리가 같으면 strike ++;숫자만 같으면 ball++;

void main(){
	int num[10] ={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int com[3];
	int me[3];
	int strk =0;
	int ball =0;
	int R;
	srand(time(NULL));
	
	for(int i =0; i <100; i++){						//랜덤 세개 출력
		R =rand() %9 +1;
		num[0] =num[0] ^num[R];
		num[R] =num[0] ^num[R];
		num[0] =num[0] ^num[R];
	}
	for(int i=0; i <3; i++) com[i] =num[i];
	for(int i =0; i <3; i++) printf("%d ",com[i]);
	printf("\n");printf("\n");

	int run =1;
	int flag;
	while(run){
		ball =0;
		strk =0;
		printf("0~9 세개 입력 : ");
		scanf("%d %d %d", &me[0], &me[1], &me[2]);	//세개 입력

		flag =0;
		for(int i =0; i <3; i++){					//중복숫자, 범위 외 숫자 체크
			if(me[i] <0 || me[i] >9) flag =1;
			if(me[i] == me[(i+1)%3]) flag =1;
		}
		if(flag) continue;

		for(int i =0; i <3; i++){					//ball,strike 카운트
			for(int j =0; j <3; j++){
				if(me[i] ==com[j]){
					if(i ==j) strk++;
					else ball++;
				}
			}
		}
		if(strk ==3){
			printf("정답\n");
			run =0;
		}
		else{
			printf("strk : %d\nball : %d\n", strk, ball);
		}
	}



	printf("\n");
	system("pause");
}