 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
   // find prime nos in an array

    int n, i;
    printf("enter no of elements  ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("enter  %d element", i + 1);
        scanf("%d", &arr[i]);
    }

    int primecount = 0;

    for (int i = 0; i < n; i++)
    {
        int isprime = 1; // prime

        if (arr[i] <= 1)
        {
            isprime = 0; // not prime
        }
        else
        {
            for (int j = 2; j <= arr[i] / 2; j++)
            {
                if (arr[i] % j == 0)
                {
                    isprime = 0;
                    break;
                }
            }
        }
        if (isprime == 1)
        {
            primecount++;
        }
    }
    printf("no of prime nos-%d", primecount);

  return 0;
}
