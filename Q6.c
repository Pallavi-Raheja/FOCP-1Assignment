 #include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{ // Q6.
    // binary to decimal and decimal to binary
    // Conversion	Method
    // Binary → Decimal	Multiply each bit by powers of 2 and add
    // Decimal → Binary	Divide by 2 and read remainders bottom to top

    int choice;
    printf("enter your choice; 1-Binary to decimal or 2- decimal to binary  ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int b, count = 0, dec = 0;
        printf("enter binary no.");
        scanf("%d", &b);
        int temp = b;
        // eg.1011=(1 × 2³) + (0 × 2²) + (1 × 2¹) + (1 × 2⁰)
        while (temp != 0)
        {
            temp = temp / 10;
            count++;
        }
        for (int i = 0; i < count; i++)
        {
            int digit = b % 10;
            dec = dec + digit * pow(2, i);
            b = b / 10;
        }
        printf("%d", dec);
    }
    else if (choice == 2)
    {
        int d, rem, bin = 0, p = 1;
        printf("enter decimal no.");
        scanf("%d", &d);
       
        while (d != 0)
        {
            rem = d % 2;
            bin = bin + rem * p;
            p = p * 10;
            d = d / 2;
        }
        printf("%d", bin);
    }
    else
    {
        printf("wrong input");
    }
return 0;
}
