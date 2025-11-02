 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
 int n;
    printf("enter no of students  ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter  student %d marks", i + 1);
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 99)
        {
            printf("student %d got 99 marks\n", j + 1);
            count++;
        }
    }

    printf("total no of students that scored  99 marks-%d\n", count);
return 0;
}
