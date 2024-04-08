/*  Program 3: WAP to find max among 2 numbers. Take all the values from the
    user
    Input : 2 4
    Output: 4
*/

#include <stdio.h>
void main()
{

    int x, y;

    printf("Enter the first number = ");
    scanf("%d", &x);

    printf("Enter the second number = ");
    scanf("%d", &y);

    if (x > y)
    {

        printf("max = %d\n", x);
    }
    else
    {

        printf("max = %d\n", y);
    }
}