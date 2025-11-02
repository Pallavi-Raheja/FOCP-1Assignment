 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
int n;
    printf("enter no of scores  ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter  %d score", i + 1);
        scanf("%d", &arr[i]);
    }
    int counteven = 0, countodd = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 == 0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
    }
    int even_array[counteven], odd_array[countodd];
    int b = 0, a = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 == 0)
        {

            even_array[a] = arr[j];
            a++;
        }
        else
        {

            odd_array[b] = arr[j];
            b++;
        }
    }
    printf("elements of even array\n");
    for (int p = 0; p < counteven; p++)
    {
        printf("%d ", even_array[p]);
    }
    printf("\nelements of odd array\n");
    for (int p = 0; p < countodd; p++)
    {
        printf("%d ", odd_array[p]);
    }
return 0;
}
