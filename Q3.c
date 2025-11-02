 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
// Q3.
    // subtract two integers without using -
    int num4, num5, b;
    printf("enter two numbers to subtract");
    scanf("%d %d", &num4, &num5);
    for (b = 0; b < num5; b++)
    {
        num4 = num4 - 1;
    }
    printf("%d", num4);
return 0;
}
