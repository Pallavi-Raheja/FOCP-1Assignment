 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
   // fibonacci series

    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    if (n >= 1)
    {
        printf("%d ", a);
    }

    if (n >= 2)
    {
        printf("%d ", b);
    }

    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
return 0;
}
