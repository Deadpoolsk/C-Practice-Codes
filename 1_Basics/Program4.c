/*  Program 4: WAP to find min among 2 numbers. Take all the values from the user
    Input : 2 3
    Output: 2
*/

#include <stdio.h>
void main()
{

    int x, y;

    printf("Enter the first number = ");
    scanf("%d", &x);

    printf("Enter the second number = ");
    scanf("%d", &y);

    if (x < y)
    {

        printf("min = %d\n", x);
    }
    else
    {

        printf("min = %d\n", y);
    }
}