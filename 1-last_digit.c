#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of  n is ");
	if (n == 0){
	  printf("%d\n",n)
	}	
	else if(n > 5){
	  printf("%d\n",n);
	}
	else if(n < 6 && n != 0){
	       printf("and is less than 6 and not 0\n")	
	return (0);
}
