/*  1. Write a program to print the first 10 capital Alphabets. */

#include <stdio.h>
void main()
{

    char ch = 'A';
    int x = 65;
    for (int i = 1; i <= 10; i++)
    {
        // printf("%d = ",ch++);
        printf("%c\n", x++);
    }
}