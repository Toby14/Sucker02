// Toby14
#include <stdio.h>
#include <stdlib.h>
//Given an array of six integers (e.g., int array[6]), write a for-loop that uses pointer arithmetic to print all those integers. 
//In other words, do NOT use array subscripts at all; find a way to print those values without typing array[i].

int main(void)
{
	int a[6];
	
	printf("Printing out an array using pointer arithmetic..\n");
	for (int i = 0; i < 6; i++)
	{
		a[i] = i * 100;
	}
	
	for (int i = 0; i < 6; i++)
	{
		printf("address: &a[%d] = %p\n",i,  (a + i));
		printf("value: a[%d] = %d\n",i, *(a + i));
	}
	return 0;
}

