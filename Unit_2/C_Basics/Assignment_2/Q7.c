/*
 * main.c
 *
 *  Created on: Feb 10, 2023
 *      Author: Compu Market
 */


#include <stdio.h>

void main() {
	int n ;
	printf ("enter a number: ");
	fflush (stdin );
	fflush (stdout);
	scanf ("%d",&n);

	if (n>0)
	{
		int fact=1;
		for (int j=1 ;j<=n ; j++)
		{

			fact*=j;
		}
		printf ("the factorial = %d ", fact);

	}
	else if (n==0)
		printf (" the factorial of zero equal 1");
	else
		printf ("Error !! Factorial of the negative numbers doesn't exist");


}
