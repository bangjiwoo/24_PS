// Review_10 컴퓨터학과 20230799 방지우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int equalArray(int a[], int aSize, int b[], int bSize);

int main(void)
{
	int a[5] = { 10,20,30,40,50 };
	int b[5] = { 10,20, 30, 40, 50};

	int aSize = 5, bSize = 5;

	int same = 1;
	/*int i;
	if (aSize != bSize)
		same = 0;
	else {
		for(i=0;i<aSize;i++)
			if (a[i] != b[i]) {
				same = 0;
				break;
			}

	}*/

	same = equalArray(a, aSize, b, bSize);

	if (same == 1)
		printf("같다.");
	else
		printf("다르다.");

}

int equalArray(int a[], int aSize, int b[], int bSize)
{
	if (aSize != bSize)
		return 0;
	else {
		for (int i = 0; i < aSize; i++)
			if (a[i] != b[i]) 
				return 0;		
	}
	return 1;
}