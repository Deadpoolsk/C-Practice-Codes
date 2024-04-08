/*  Program 2: WAP print the value of the below expressions.
    x =9 ;
    ans = ++x + x++ + ++x
    Print ans value and print x
    ans1= ++x + ++x + ++x + ++x
    Print ans1 value and print x
    ans2 = x++ + x++ + ++x + x++ + ++x
    Print ans2 value and print x
    ans3 = x++ + x++ + x++ + x++
    Print ans3 value and print x
*/

#include<stdio.h>
void main() {

    int x = 9;
    int ans = ++x + x++ + ++x;  // 33 and 12
    printf("ans = %d, x = %d\n", ans, x);

    int ans1 = ++x + ++x + ++x + ++x;   // 59 and 16
    printf("ans1 = %d, x = %d\n", ans1, x);

    int ans2 = x++ + x++ + ++x + x++ + ++x; // 92 and 21
    printf("ans2 = %d, x = %d\n", ans2, x);

    int ans3 = x++ + x++ + x++ + x++;
    printf("ans3 = %d, x = %d\n", ans3, x);

}