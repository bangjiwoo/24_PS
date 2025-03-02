// 컴퓨터학과 20230799 방지우
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

			count = flood_fill(x, y + 1, count); // 순환 호출
			count = flood_fill(x + 1, y, count); // 순환 호출
			count = flood_fill(x, y - 1, count); // 순환 호출
			count = flood_fill(x - 1, y, count); // 순환 호출

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
	printf("미로:\n");
	printmaze();
	flood_fill(0, 0, 1);
	
	printf("\n시작점을 <0 0>으로 한 미로방문<순서표기>:\n");
	printmaze();

}