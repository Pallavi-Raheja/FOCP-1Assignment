  #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
// Q4.
    // SWAP TWO NOS BY FOUR DIFFERENT METHODS

    // arithematic
    int num6, num7;
    printf("enter two numbers to swap ");
    scanf("%d %d", &num6, &num7);
    num6 = num6 + num7;
    num7 = num6 - num7;
    num6 = num6 - num7;
    printf("num1=%d num2= %d", num6, num7);

    // pointer
    int num8, num9;
    printf("enter two numbers to swap ");
    scanf("%d %d", &num8, &num9);
     int *aptr = &num8;
    int *bptr = &num9;
    int temp;
    temp=num8;
    num8=*bptr;
    num9=temp;
    printf("num1=%d num2=%d", num8, num9);

    // bitwise
     int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    // temporary variable
    int a = 10, b = 20, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d b=%d", a, b);
return 0;
}
