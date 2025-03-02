// 컴퓨터학과 20230799 방지우
#include <stdio.h>
void echo1();
void echo2();
void reverse();

int main(void)
{
	printf("Enter a string and press enter: ");
	echo1();

	printf("\nEnter a string and press enter: ");
	echo2();

	printf("\nEnter a string and press enter: ");
	reverse();
}

void echo1()
{
	int ch;
	while ((ch = getchar()) != '\n')
		putchar(ch);
}

void echo2() 
{
	int ch;
	if ((ch = getchar()) != '\n') {
		putchar(ch);
		echo2();
	}
}

void reverse()
{
	int ch;
	if ((ch = getchar()) != '\n') {
		reverse();
		putchar(ch);

	}
}