/*
 * main.c
 *
 *  Created on: Feb 9, 2023
 *      Author: Compu Market
 */



# include "stdio.h"
void main ()
{
	float a , b ;
	printf ("Enter athe value of a : ") ;
	fflush (stdout ) ; fflush (stdin) ;
	scanf ("%f" , &b ) ;
	printf ("Enter athe value of b : ") ;
	fflush (stdout ) ; fflush (stdin) ;
	scanf ("%f" , &a ) ;

/*	float c ;
	c=a ;
	a=b ;
	b=c ;*/

	printf ("After swapping, value of a = %f \n" , a);
	printf ("After swapping, value of b = %f \n" , b);
}
