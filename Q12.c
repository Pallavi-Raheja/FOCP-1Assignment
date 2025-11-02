 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
   int n;
    printf("enter no of elements  ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter  %d element", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("max=%d min =%d", max, min);
    
  return 0;
}
