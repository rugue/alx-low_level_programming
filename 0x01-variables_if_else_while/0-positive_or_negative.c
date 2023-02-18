#include <stdio.h>
#include <time.h>
/*
 * Main - 0-positive_or_negative.c
 *
 * Return 0(Success)
 */

int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0){
		printf("is positive");
	}else if(){
		printf("is zero");
	}else{
		printf("is negative");
	}
	return (0);
}
