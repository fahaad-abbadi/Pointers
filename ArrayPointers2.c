#include <stdio.h>

void main()
{
    int a[5] = {11, 22, 33, 44, 55};

    int *p;

    p = a;

    // it prints the addresses
    printf("\n%d\t%d", p, a);

    // it prints the value, the below two lines print the same
    printf("\n%d\t%d", *p, *a);
    printf("\n%d\t%d\n\n", *p + 0, a[0]);

    //here, we have s slight difference
    //'*p+1' means it adds the element with 1, whereas ()
    printf("\n%d\t%d", *(p + 1), *p + 1);
    printf("\n%d\t%d", a[1], a[0] + 1);
}