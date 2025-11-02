 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
 // last element wil become first and the other will shift by +1 index
    int n, i;
    printf("enter no of elements  ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("enter  %d element", i + 1);
        scanf("%d", &arr[i]);
    }
    int last = arr[n - 1];
    for (i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
return 0;
}
