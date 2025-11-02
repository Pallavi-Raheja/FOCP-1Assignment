 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
 int n, i;
    printf("enter no of elements  ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("enter  %d element", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("array before deletion\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }



    for (i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (i = (n / 2) - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    n--; // deleting last element 

    printf("array after deletion\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
return 0;
}
