/*  Program 7: Write a program, take a number and print whether it is less than 10 or greater */

#include <stdio.h>
void main()
{

    int x;
    scanf("%d", &x);

    if (x < 10)
    {
        printf("%d is less than 10", x);
    }
    else if (x > 10)
    {
        printf("%d is greater than 10",x);
    }
    else
    {
        printf("%d is equal to 10", x);
    }
}