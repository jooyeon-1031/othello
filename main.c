#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gameboard[N][N];
int main(int argc, char *argv[]) {
	init_othello();
	
	while (isGameEnd() == 0)
	{//game ���� ���� Ȯ��
	print_othello();//��ġ ���� ��� ��
	if(��ġ�� ������ ĭ�� �ִ��� Ȯ��)
	   continue; //�� �÷��̾� ��� ��ġ�� �Ұ����ϸ� �ݺ����� ���������� ��
	   ��ġ�� ��ǥ �Է� �ޱ�;
	   
	   if(�Է� ��ǥ�� �������� üũ)
	       if(������ �õ�){
	       	� ���������� ���;
			   �� �ٲ�; 
		   } 
		   else
		       �������� �Է����� ���; 
	}
	check_result();//������ 
	return 0;
}
