  #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
// Q2.
    // find hcf
    // find factors of a no then find highest common
    int num2, num3;

    printf("enter the number1 \n");
    scanf("%d", &num2);
    printf("enter the number2 \n");
    scanf("%d", &num3);
    int i, hcf;
    for (i = 1; i < num2 && i < num3; i++)
    {
        if (num2 % i == 0 && num3 % i == 0)
        {
            hcf = i;
        }
    }
    printf("%d", hcf);
return 0;
}
