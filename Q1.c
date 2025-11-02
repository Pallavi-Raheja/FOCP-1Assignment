#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
    // Q1.
    // a number that is equal to the sum of its own digits, each raised to the power of the total number of digits.
    // input a no.,then count digits,then each digit raised power to count and add
    int num1, count = 0;
    printf("enter the number ");
    scanf("%d", &num1);
    int n = num1;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    int a = num1;
    int sum = 0;
    while (a != 0)
    {
        int digit;
        digit = a % 10;
        sum += pow(digit, count);
        a = a / 10;
    }

    if (sum == num1)
    {
        printf("the no is armstrong ");
    }
    else
    {
        printf("no is not armstrong");
    }
return 0; 
}
