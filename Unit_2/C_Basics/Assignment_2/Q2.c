/*
 * main.c
 *
 *  Created on: Feb 10, 2023
 *      Author: Compu Market
 */

# include "stdio.h"
#include "ctype.h"    //the library that contain the tolower function

void main ()
{
	char c ;
	printf (" Enter an alphapet : ");
	fflush (stdin); fflush (stdout) ;
	scanf ("%c" , &c);

	// check whether it vowel or not
	// vowel letters (a ,e, i ,u ,o )

	char s = tolower(c);    // convert every input letter to small letter

	if (s=='e'  ||s== 'a' || s=='u' ||s== 'i' ||s== 'o')
		printf ("%c is vowel " , c );
	else
		printf ("%c is consonant " , c );



}
