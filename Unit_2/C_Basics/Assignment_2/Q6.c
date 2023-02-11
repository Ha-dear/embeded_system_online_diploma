/*
 * main.c
 *
 *  Created on: Feb 10, 2023
 *      Author: Compu Market
 */


#include "stdio.h"
void main ()
{
	int i ;
	printf ("Enter an integer number : ") ;
	fflush (stdin);
	fflush (stdout);
	scanf("%d",&i);
	int j,sum=0 ;
	for (j=0 ; j<=i ; j++)
		sum+=j;
	printf ("the sum = %d",sum);
}
