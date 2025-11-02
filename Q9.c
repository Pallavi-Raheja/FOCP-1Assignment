 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
   // first occurence of 99
    int n;
    printf("enter no of elememts in an array ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 99)
        {
            printf(" first occurence of 99 is at %d position ", j + 1);
            break;
        }
    }
return 0;
}
