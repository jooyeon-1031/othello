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
	{//game ���� ���� Ȯ��
	print_othello([x][y]);//��ġ ���� ��� ��
	if(��ġ�� ������ ĭ�� �ִ��� Ȯ��)
	   continue;
	if else 
	    break;
	    //�� �÷��̾� ��� ��ġ�� �Ұ����ϸ� �ݺ����� ���������� ��
	   scanf("(%d) (%d)", [x], [y]);
	   //��ġ�� ��ǥ �Է� �ޱ�;
	   
	   if(board[x][y] == 1)
	       if(������ �õ�){
	       	printf("":);
			   �� �ٲ�; 
		   } 
		   else
		      printf("wrong!:"); 
	}
	check_result("win!:");//������ 
	return 0;
}
