#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
/* Main - entry point*/
/* Return: Always 0 (Success)
/* Printf: Prints output if n is positive, zero, less than zero
*/
int main(void)
{
      int n;
      srand(time(0));
      n = rand() - RAND_MAX / 2;
      if ( n > 0 ) { /* if n is greater than zero */
      	  printf( "is positive\n" ); /* This is a positive number */ 
      }
      if ( n == 0 ) { /* If n is equal to  zero */
	 printf( "is zero\n" );  /* This is zero */
      } 
      if ( n < 0) { /* if n is less than zero */
	  printf( "is less than zero\n" );
      }	  
      return (0);
}
