# include "stdio.h"
void main ()
{
	float a ;
	printf ("Enter a number to check : ");
	fflush(stdin);
	fflush(stdout);
	scanf ("%f" , &a);

	if (a>0.0)
		printf ("the number (%f) is positive  " , a) ;
	else if (a==0)
		printf ("the number is zero ");
	else
		printf ("the number (%f) is negetive ",a);



}
