/*
 * main.c
 *
 *  Created on: Feb 10, 2023
 *      Author: Compu Market
 */

#include <stdio.h>

void main() {
	char o ;
	printf ("enter an operator (*,-,+,/): ");
	fflush (stdin );
	fflush (stdout);
	scanf ("%c",&o);
	float a,b;
	printf ("enter the two operands : ");
	fflush (stdin );
	fflush (stdout);
	scanf ("%f %f",&a,&b);

	switch (o)
	{
	case '*' :
		printf ("%f * %f = %f ", a,b,a*b);
		break ;

	case '-' :
		printf ("%f - %f = %f ", a,b,a-b);
		break ;

	case '+' :
		printf ("%f + %f = %f ", a,b,a+b);
		break ;

	case '/' :
		printf ("%f / %f = %f ", a,b,a/b);
		break ;

	default :
		printf ("Error !! ");
		break;
	}






}
