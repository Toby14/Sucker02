#include <stdio.h>
#include <stdlib.h>
 //fill in the blank with the appropriate malloc() statement, 
 //and eliminate the memory leak in the program
 
int main(void)
{
   char *name = NULL;

   // length of the dynamically allocated string
   int array_size = -1;

   // length of the user's name
   int length = -1;

   while (1)
   {
      printf("How many letters are in your name? (0 to quit) ");

      // Note: scanf() always wants the address
      // where it should store the input it's reading.
      scanf("%d", &length);

      if (length == 0)
         break;

      if (length + 1 > array_size)
      {
         name = malloc(sizeof(char) * (length + 1));
         array_size = length + 1;
      }

      scanf("%s", name);
      printf("You entered: %s\n\n", name);
   }

   return 0;
}
