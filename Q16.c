 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
// insert elemnt at middle ,front,last
    int n, i;
    printf("enter no of elements  ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("enter  %d element", i + 1);
        scanf("%d", &arr[i]);
    }
    int front;
    printf("enter the no to add in front of array ");
    scanf("%d", &front);

    for (i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = front;
    n++;
    // 1 2 3 4
    // 5 1 2 3 4

    int middle;
    printf("enter the no to add in middle of array ");
    scanf("%d", &middle);
    for (i = n; i > n / 2; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[n / 2] = middle;
    n++;

    int last;
    printf("enter the no to add in last of array ");
    scanf("%d", &last);
    n++;
    arr[n - 1] = last;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
return 0;
}
