/*  Program 5: WAP to take numerical input from the user and find whether the number is
    divisible by 5 and 11. Take all the values from the user
    Input: 55
    Output: 55 is divisible by 5 & 11
    Input: 15
    Output: 15 is not divisible by 5 & 11
*/

#include <stdio.h>
void main()
{

    int x;
    printf("Enter the number = ");
    scanf("%d", &x);
    if (x % 5 == 0 && x % 11 == 0)
    {
        printf("%d is divisible by 5 and 11", x);
    }
    else
    {
        printf("%d is not divisible by 5 and 11", x);
    }
}
