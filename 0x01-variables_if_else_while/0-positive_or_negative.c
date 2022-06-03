#include <stdlib.h>
#include <time.h>
/**
/* more headers goes there */
/* betty style doc for function main goes there */
/* Main - entry point*/
/* Return: Always 0 (Success)
*/
int main(void)
{
      int n;
      srand(time(0));
      n = rand() - RAND_MAX / 2;
      if ( n > 0 ) { /* if n is greater than zero */
      	  printf( "The number is positive\n" ); /* This is a positive number */ 
      }
      if ( n == 0 ) { /* If n is equal to  zero */
	 printf( "The number is zero\n" );  /* This is zero */
      } 
      if ( n < 0) { /* if n is less than zero */
	  printf( "The number is less than zero\n" );
      }	  
      return (0);
}
