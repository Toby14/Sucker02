#include <stdio.h>
#include <stdlib.h>

//Write a function that creates an integer array of size n 
//and returns the address of that array (potentially NULL, if malloc() fails).
int *create_integer_array(int n)
{
	int *array = malloc(sizeof(int ) * n);
	
	printf("In the function: %p\n\n", array); // check if malloc was successfully
	if(array == NULL)
		return NULL;

	return array;
}

int main(void)
{
	int a_size;
	printf("Enter the size of array: \n");
	scanf("%d", &a_size);
	
	int *a = NULL;
	printf("%p\n\n", a); // for checking
	a = create_integer_array(a_size);
	
	printf("In main: %p\n\n", a); // for checking
	
	for(int i = 0; i < a_size; i++)
	{
		a[i] = i *10;
	}

	for(int i = 0; i < a_size; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
