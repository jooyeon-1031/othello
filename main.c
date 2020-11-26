#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gameboard[6][6];
int main(int argc, char *argv[]) {
	init_othello();
	int x,y;
   for(y=0;y<6;y++)
   for(x=0;x<6;x++)
    board[x][y]=0;
  
	while (isGameEnd() == 0)
	{//game 종료 조건 확인
	print_othello([x][y]);//배치 상태 출력 등
	if(배치가 가능한 칸이 있는지 확인)
	   continue;
	if else 
	    break;
	    //두 플레이어 모두 배치가 불가능하면 반복문을 빠져나가야 함
	   scanf("(%d) (%d)", [x], [y]);
	   //배치할 좌표 입력 받기;
	   
	   if(board[x][y] == 1)
	       if(뒤집기 시도){
	       	printf("":);
			   턴 바꿈; 
		   } 
		   else
		      printf("wrong!:"); 
	}
	check_result("win!:");//결과출력 
	return 0;
}
