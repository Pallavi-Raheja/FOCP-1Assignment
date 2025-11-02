 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
   //telling the quadrants

    int x, y;
    printf("enter the coordinates");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
    {
        printf("1st quadrant");
    }
    else if (x < 0 && y < 0)
    {
        printf("2nd quadrant");
    }
    else if (x < 0 && y < 0)
    {
        printf("3rd quardrant ");
    }
    else
    {
        printf("4th quardrant ");
    }
return 0;
}
