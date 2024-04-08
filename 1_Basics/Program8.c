/*  Program 8: Write a program, take a character and print whether it is in UPPERCASE or lowercase. Take all the values from the user
    Input: var = A
    Output: You entered the UPPERCASE character.
 */

#include <stdio.h>
void main()
{

    char ch;
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("You enered UPPERCASE character");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("You enered lowercase character");
    }
    else
    {
        printf("You entered wrong character");
    }
}