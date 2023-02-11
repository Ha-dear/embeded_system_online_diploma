/*
 * main.c
 *
 *  Created on: Feb 10, 2023
 *      Author: Compu Market
 */


#include "stdio.h"
void main ()
{
	float a,b,c ;
	printf ( "Enter three numbers : " ) ;
	fflush (stdin) ; fflush (stdout);
	scanf ("%f %f %f",&a,&b,&c);

	if (a>b)
	{
		if (a>c)
			printf ("the largest number is a= %f " , a) ;
		else
			printf ("the largest number is c= %f " , c) ;
	}
	else
	{
		if (b>c)
			printf ("the largest number is b= %f " , b) ;
		else
			printf ("the largest number is c= %f " , c) ;
	}

}
