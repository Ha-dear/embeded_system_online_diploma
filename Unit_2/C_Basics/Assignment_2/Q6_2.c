/*
 * main.c
 *
 *  Created on: Feb 10, 2023
 *      Author: Compu Market
 */



#include <stdio.h>

void main() {
    int a ;
    printf ("Enter an integer number: ");
    fflush (stdin);
    fflush (stdout);
    scanf("%d",&a);

    int sum=0;
    sum=a*(a+1)/2;
    printf ("the sum = %d ", sum);
}
