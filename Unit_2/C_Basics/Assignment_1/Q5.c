/*
 * main.c
 *
 *  Created on: Feb 9, 2023
 *      Author: Compu Market
 */


# include "stdio.h"
void main ()
{
	char c ;
	printf ("Enter a character : ");
	fflush (stdout) ; fflush (stdin);
	scanf("%c" ,&c);
	printf("ASSCI code of %c is : %d" , c , (int)c);
}
