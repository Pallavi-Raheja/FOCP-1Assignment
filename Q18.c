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
    printf("given array \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    int check = 0;
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                check = 1;
                break;
            }
        }
    }
    if (check == 0)
    {
        printf("%d", -1);
    }

return 0;
}
