// 8. Write a program to print a table of 11 in reverse order

#include <stdio.h>
void main()
{

    int num = 11;

    for (int i = 10; i >= 1; i--)
    {

        printf("%d * %d = %d\n", num, i, num * i);
    }
}