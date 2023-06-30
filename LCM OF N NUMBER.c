#include <stdio.h>
#include <math.h>
#define SZ 100
int main()
{
    int a[SZ], totalNumbers, i, x, y, c, b;
    printf("How many numers you have (<=%d) ?:", SZ);
    scanf("%d", &totalNumbers);
    if (totalNumbers <= 0)
    {
        printf("Sorry! Number must be positive.\n");
        system("pause");
        return 0;
    }
    if (totalNumbers > 100)
    {
        printf("\nSorry! My maximum Capacity is %d\n", SZ);
        system("pause");
        return 0;
    }
    // Code for enter number
    for (i = 0; i < totalNumbers; i += 1)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
        // Make entered number positive if enterd negative.
        a[i] = abs(a[i]);
    }
    // Code to find lcm
    x = 1;
    for (i = 0; i < totalNumbers; i += 1)
    {
        // put the value of ith element in y.
        y = a[i];
        // find the lcm of x and y.
        b = x;
        c = y;
        while (b != c)
        {
            if (b < c)
                b += x;
            else
                c += y;
        }
        // put the current lcm in x.
        x = c;
    }
    // Print result.
    system("cls");
    if (totalNumbers == 1)
        printf("Number given by you is:");
    else
        printf("Numbers given by you are:");
    for (i = 0; i < totalNumbers; i += 1)
    {
        printf("%d", a[i]);
        // print seperator.
        if (i < totalNumbers - 2)
            printf(", ");
        else if (i == totalNumbers - 2)
            printf(" and ");
    }
    printf("\nLCM of all number(s) is: %d", x);
    printf("\nThank You\n");
    system("pause");
    return 0;
}