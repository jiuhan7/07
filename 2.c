#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i;
	
	for (i=0;i<5;i++)
	{
		static int temp = 1;
		
		printf("temp = %d\n", temp);
		temp++;
	}
	
	system("PAUSE");
	return 0;
}
