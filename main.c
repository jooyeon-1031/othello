#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gameboard[N][N];
int main(int argc, char *argv[]) {
	init_othello();
	
	while (isGameEnd() == 0)
	{//game 종료 조건 확인
	print_othello();//배치 상태 출력 등
	if(배치가 가능한 칸이 있는지 확인)
	   continue; //두 플레이어 모두 배치가 불가능하면 반복문을 빠져나가야 함
	   배치할 좌표 입력 받기;
	   
	   if(입력 좌표가 적절한지 체크)
	       if(뒤집기 시도){
	       	몇개 뒤집었는지 출력;
			   턴 바꿈; 
		   } 
		   else
		       부적절한 입력임을 출력; 
	}
	check_result();//결과출력 
	return 0;
}
