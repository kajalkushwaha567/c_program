#include <stdio.h>
int main()
{
    int a[20], l, i;
    for (i = 0; i < 20; i += 1)
    {
        printf("Enter number %d:", i + 1);
        scanf("%d", &a[i]);
    }
    // find the largest number
    // let first element of list is the largest number so copy it to l.
    l = a[0];
    // now compare l with all element of list and replace it if found larger number.
    for (i = 1; i < 20; i += 1)
    {
        if (a[i] > l)
            l = a[i];
    }
    printf("You have enterd:");
    for (i = 0; i < 20; i += 1)
    {
        printf("%d", a[i]);
        if (i<20-2)
        printf(", ");
        else if (i==20-2)
        printf(" and ");
    

    }
    printf("\nLarget number:%d", l);
    return 0;
}