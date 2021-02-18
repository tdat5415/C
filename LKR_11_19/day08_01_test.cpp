#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(){
	srand(time(NULL));
	//택시게임
	//1. 속도 : 1~3제한
	//2. 방향 : 0, 1, 2, 3 북동남서
	//3. 전진 : 방향으로 속도만큼 이동
	//4. 목적지 도착하면 새로운 목적지 생성(-10~10)
	int x = 0, y = 0, speed = 0, dir = 0;
	int des_x = 7, des_y = -5;
	int run = 1;
	int sel;
	while(run){
		printf("===============================\n");
		printf("내위치 : x:%d, y:%d\n", x, y);
		printf("속도 : %d, 방향 : %d\n", speed, dir);
		printf("목적지 : x:%d, y:%d\n",des_x, des_y);
		printf("1. 속도\n");
		printf("2. 방향\n");
		printf("3. 전진\n");
		printf("4. 종료\n");
		printf("===============================\n");
		printf("입력하시오 : ");
		scanf_s("%d",&sel);
		if(sel == 1){
			printf("속도를 입력하시오(1~3) : ");
			scanf("%d",&speed);
			if(speed > 3) speed = 3;
			else if(speed < 1) speed = 1;
		}
		else if(sel == 2){
			printf("방향을 입력하시오(0,1,2,3북동남서) : ");
			scanf("%d",&dir);
			if(dir > 3) dir = 3;
			else if(dir < 0) dir = 0;
		}
		else if(sel == 3){
			if(dir == 0) y += speed;
			else if(dir == 1) x += speed;
			else if(dir == 2) y -= speed;
			else if(dir == 3) x -= speed;
		}
		else if(sel == 4){
			run = 0;
		}
		else{
			printf("잘못입력하였습니다.\n");
		}
		if(des_x == x && des_y == y){
			printf("!!!!!!!!!!!도착하였습니다!!!!!!!!!!\n");
			printf("새로운 도착지점이 생성되었습니다.\n");
			des_x = rand()%21 - 10;
			des_y = rand()%21 - 10;
		}
	}




	printf("\n");
	system("pause");
}