#include<stdio.h>
#include<Windows.h>


//합, 갯수, 인값, 값인, 교환, 맥스, 추가, 삭제, 정렬


void main(){
	//로그인 : id, pw 로그인
	// 송금 ; 상대 id, 금액 : 로그인된 id 계좌에서 차감
	int id[3] = {111111, 222222, 333333};
	int pw[3] = {1234, 2345, 3456};
	int balance[3] = {50000, 60000, 70000};
	int my_id, my_pw;
	int flag = 1;//
	int login = 0;
	int i;
	int index;
	int run;
	int sel;
	int _t;

	run =1;
	while(run){
		printf("\n");
		if(login) printf("1. 로그아웃\n");
		else printf("1. 로그인\n");
		printf("2. 송금\n");
		printf("3. 종료\n");
		if(login){
			printf("%d로 로그인됨\n",id[index]);
			printf("현재 잔액 : %d\n",balance[index]);
		}
		printf("입력하시오 : ");
		scanf_s("%d",&sel);
		if(sel == 1){
			if(login){
				system("cls");
				printf("로그아웃되었습니다.\n");
				login =0;
			}
			else{
				flag = 1;
				system("cls");
				printf("아이디를 입력하시오 : ");
				scanf_s("%d",&my_id);
				i = 0;
				while(i < 3){
					if(my_id == id[i]){
						index =i;
						flag =0;
					}
					i++;
				}
				if(flag){
					system("cls");
					printf("아이디가 없습니다.\n");
				}
				else{
					system("cls");
					printf("비번을 입력하시오 : ");
					scanf_s("%d",&my_pw);
					system("cls");
					if(my_pw != pw[index]) printf("비번이 일치하지않습니다. \n");
					else {
						printf("로그인되었습니다.\n");
						login =1;
					}
				}
			}
		}
		else if(sel ==2){
			if(login){
				system("cls");
				printf("상대 id를 입력하시오 : ");
				scanf_s("%d",&_t);
				i = 0;
				flag =1;
				while(i < 3){
					if(_t == id[i]){
						flag =0;
						system("cls");
						printf("보낼금액을 입력하시오 : ");
						scanf_s("%d",&_t);
						balance[index] -=_t;
						balance[i] +=_t;
						system("cls");
						printf("입금되었습니다.\n");
					}
					i++;
				}
				if(flag){
					system("cls");
					printf("아이디가 없습니다.\n");
				}
			}
			else{
				system("cls");
				printf("로그인을 하시오.\n");
			}

		}
		else if(sel ==3) run =0;
		else{
			system("cls");
			printf("잘못 입력하였습니다.\n");
		}
	}



	printf("\n");
	system("pause");
}