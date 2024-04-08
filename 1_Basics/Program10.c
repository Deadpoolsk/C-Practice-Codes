/*  Program 10: Write a program to check if a character is a vowel or consonant. Take all the values from the user
    Input: var= ”A”;
    Output: A is a vowel.
    Input: var= ”D”;
    Output: D is a consonant
*/

#include <stdio.h>
void main()
{

    char ch;
    scanf(" %c", &ch);
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
    {
        printf("%c is vowel", ch);
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("%c is consonant", ch);
    }
    else
    {
        printf("You entered wrong character");
    }
}