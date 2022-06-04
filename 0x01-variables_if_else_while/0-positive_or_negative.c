#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* Main - prints a random number and states whether
* it is positve, negative or zero
* Printf: prints output 
* Return: Always 0 (Success) */ 
int main(void)
{
int n;

   srand(time(0));
   n = rand() - RAND_MAX / 2;
if (n > 0)
    printf("%d is positive\n", n);
else if (n < 0)
   printf("%d is negative\n", n); 
else
  printf("%d is zero\n", n);
return (0);
}
