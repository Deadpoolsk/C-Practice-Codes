/*  Write a program to print the value and size of the below variables.Take all the values from the user.

    num=10
    chr = ‘S’
    rs = 55.20
    crMoney = 542154313480.544543

*/

#include <stdio.h>
void main()
{

    // intilialising variables.
    int num;
    char ch;
    float rs;
    double crMoney;

    // Taking input values from user
    printf("Enter the value of number num = ");
    scanf("%d", &num);

    printf("Enter the value of ch = ");
    scanf(" %c", &ch); // Note the space before %c to consume any whitespace characters

    printf("Enter the value of rs = ");
    scanf("%f", &rs);

    printf("Enter the value of crMoney = ");
    scanf("%lf", &crMoney);

    // Printing values and sizes
    printf("num = %d,       size of num = %d\n", num, sizeof(num));
    printf("ch = %c,        size of ch = %d\n", ch, sizeof(ch));
    printf("rs = %.2f,      size of rs = %d\n", ch, sizeof(rs));
    printf("crMoney = %.6f, size of crMoney = %d\n", crMoney, sizeof(crMoney));
}