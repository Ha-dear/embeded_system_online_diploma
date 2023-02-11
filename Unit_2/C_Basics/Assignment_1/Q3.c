/*
 * main.c
 *
 *  Created on: Feb 9, 2023
 *      Author: Compu Market
 */




# include "stdio.h"
void main ()
{
	int n1, n2 ;

	printf ("Enter two integer number : ");
	fflush(stdout) ;
	scanf ("%d %d" , &n1 ,&n2) ;
	printf ("you Entered : %d" , n1+n2 );
}
