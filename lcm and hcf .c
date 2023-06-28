#include <stdio.h>
#include <math.h>
#define SZ 100
#define pz 100

int main()
{
    int a[SZ], totalNumbers, i, x, y, c, b,hcf[pz],p,q,w,z;
    
    // Code for enter number
    for (i = 0; i < SZ; i += 1)
    {
        printf("Enter number %d(0 for stop): ", i + 1);
        scanf("%d", &a[i]);
        // Make entered number positive if enterd negative.
        a[i] = abs(a[i]);
        if(a[i]==0)
        break;
    }
    totalNumbers=i;
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
    // code for enter number for hcf
    for (i = 0; i < pz; i += 1)
    {
        printf("Enter number for hcf  %d(0 for stop): ", i + 1);
        scanf("%d", &hcf[i]);
        // Make entered number positive if enterd negative.
        hcf[i] = abs(a[i]);
        if(hcf[i]==0)
        break;
    }
     totalNumbers=i;
    // Code to find hcf
    x = 1;
    for (i = 0; i < totalNumbers; i += 1)
    {
        // put the value of ith element in y.
        z = hcf[i];
        // find the lcm of x and y.
        p = w;
        q = z;
        while (w != z)
        {
            if (w > z)
                w -= z;
            else
                z-= w;
        }
        // put the current lcm in x.
        x = w;
    }
     // Print result.
    system("cls");
    if (totalNumbers == 1)
        printf("Number given by you is:");
    else
        printf("Numbers given by you are:");
    for (i = 0; i < totalNumbers; i += 1)
    {
        printf("%d", hcf[i]);
        // print seperator.
        if (i < totalNumbers - 2)
            printf(", ");
        else if (i == totalNumbers - 2)
            printf(" and ");
    }
    printf("\nhcf of all number(s) is: %d", x);
    printf("\nThank You\n");
    system("pause");
    return 0;
}