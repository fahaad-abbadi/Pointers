#include <stdio.h>

void main()
{
    int x[4] = {11, 22, 33, 44, 55};
    int i;

    //'%p' prints the address
    // the below code prints returns
    for (i = 0; i < 5; i++)
    {
        printf("&x[%d] = %p\n", i, &x[i]);
    }

    printf("Address of array x : %p", x);

    int arr[5] = {9, 8, 7, 6, 5};
    // the below can be written bcoz 'arr' keeps address not value
    //  'int *p = &arr' it is syntax error
    //  'int *p = &arr[0]' can be written like this because 'arr[0]' is a value not address
    int *p = arr;
    int *ptr = &arr[0];

    printf("\n\n%d\n", p);
    printf("%d", ptr);
}