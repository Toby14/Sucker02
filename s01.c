#include <stdio.h>
//Fill in the blank with the appropriate conversion character?

int main(void)
{
   int i, a[4];

   // inspect the garbage values in the array
   for (i = 0; i < 4; i++)
      printf("a[%d]: %d\n", i, a[i]);

   // Fill in the blank: What conversion code should be used here?
   printf("%p\n", a);

   return 0;
}
