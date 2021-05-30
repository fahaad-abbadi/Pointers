#include <stdio.h>

void main()
{
    // initializing an array
    int a[5] = {11, 22, 33, 44, 55};

    //Here, denoting an array without '&' means it gives address of the first element of the arrays
    printf("\n %p  %p", a, &a[0]);

    //if an index is mentioned or '*' is mentioned
    printf("\n %d %d", *a, a[0]);

    // if 1 is added, it means it prints the next element
    printf("\n %d %d", *(a + 1), a[1]);

    // it gives compilation error
    // printf("\n %d", *a[0]);
}