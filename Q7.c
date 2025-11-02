 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
//binary pyramid
  int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // left half
        for (int j = 1; j <= i; j++) {
            printf("%d", (j + 1) % 2); // starts with 0 now
        }

        printf(" "); // space between halves

        // right half
        for (int j = 1; j <= i; j++) {
            printf("%d", (j + 1) % 2);
        }

        printf("\n");
    }
return 0;
}
