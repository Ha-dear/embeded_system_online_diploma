/*
 * main.c
 *
 *  Created on: Feb 10, 2023
 *      Author: Compu Market
 */


# include "stdio.h"
void main()
{
	char a ;
	printf ("Enter a character : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%c" , &a);

	// we use the ASSCI code to check whether it alphabet or not
	/* the ASSCI code of the capital letters ranges between 65 to 90 while that of the small
	ranges between 97 to 122 */
	//compare the ASSCI for the input character with that of the alphabetical code

	int i=a; //cast to the character into integer where it is equal to its ASSCI code
	if (i>=65 && i<=90)
		printf ("%c is a capital alphabet ",a);
	else if (i>=97 && i<=122)
		printf ("%c is a small alphabet ",a);
	else
		printf("%c is not an alphabet ",a);


}
