#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void f(void);

int main(void)
{
	int i;
	for (i=0; i<5; i++)
	{
		f();
	}
	system("PAUSE");
	return 0;
}

void f(void)
{
	int i;
	for (i=0; i<10; i++)
	printf("#");
}
