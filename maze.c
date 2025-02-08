// ��ǻ���а� 20230799 ������
#define WIDTH 10
#define HEIGHT 10
#include <stdio.h>

int screen[HEIGHT][WIDTH] = {
0, 0, 0,-1,-1,-1,-1,-1,-1,-1,
-1,-1, 0,-1,-1,-1,-1,-1,-1,-1,
-1, 0, 0, 0, 0, 0, 0,-1,-1,-1,
-1,-1,-1,-1, 0,-1, 0,-1,-1,-1,
-1,-1,-1,-1, 0,-1, 0,-1,-1,-1,
-1,-1, 0, 0, 0,-1, 0, 0, 0,-1,
-1,-1,-1,-1, 0,-1, 0,-1,-1,-1,
-1,-1,-1,-1, 0,-1, 0,-1, 0,-1,
-1,-1,-1,-1, 0,-1,-1,-1, 0,-1,
-1,-1,-1,-1, 0, 0, 0, 0, 0, 0
};
int flood_fill(int x, int y, int count)
{
	if (x >= 0 && x < HEIGHT && y >= 0 && y < WIDTH) {
		if (screen[x][y] == 0)
		{
			screen[x][y] = count;
			count++;

			count = flood_fill(x, y + 1, count); // ��ȯ ȣ��
			count = flood_fill(x + 1, y, count); // ��ȯ ȣ��
			count = flood_fill(x, y - 1, count); // ��ȯ ȣ��
			count = flood_fill(x - 1, y, count); // ��ȯ ȣ��

			return count;
		}
		else
			return  count;
	}
	else
		return count;
}

void printmaze()
{
	int i, j;
	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++) 
			printf("%3d", screen[i][j]);
		printf("\n");
	}
}

int main(void)
{
	printf("�̷�:\n");
	printmaze();
	flood_fill(0, 0, 1);
	
	printf("\n�������� <0 0>���� �� �̷ι湮<����ǥ��>:\n");
	printmaze();

}