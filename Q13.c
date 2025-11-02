 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
   int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Peak elements are: ");

    for (int i = 0; i < n; i++) {
        // Check for first element
        if (i == 0 && arr[i] >= arr[i + 1]) {
            printf("%d ", arr[i]);
        }
        // Check for last element
        else if (i == n - 1 && arr[i] >= arr[i - 1]) {
            printf("%d ", arr[i]);
        }
        // Check for middle elements
        else if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("%d ", arr[i]);
        }
    }


  return 0;
}
