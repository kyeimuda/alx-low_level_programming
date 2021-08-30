#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes ther\
\
e */
int main(void) /**
*main - Entry point
*/
  
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

if ( n > 0 ) {
printf("is positive\n" );
}

if ( n == 0 ) {
printf("is zero\n" );
}

if ( n < 0 ) {
printf("is negative\n" );
}

return (0);
}

