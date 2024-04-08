// 7. Write a program to print a table of 12

#include <stdio.h>
void main()
{

    int num = 12;

    for (int i = 1; i <= 10; i++)
    {

        printf("%d *  %d  =  %d\n", num, i, num * i);
    }
}