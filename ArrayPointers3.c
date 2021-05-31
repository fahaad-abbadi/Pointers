#include <stdio.h>

void main()
{
    int a = 10;

    //there is no difference in writing 'int* p' or 'int *p'   both are the same
    int *p = &a;

    // The above line is also written as
    // 'int *p;'
    //  'p = &a;'
    printf("\n%d", p);
    printf("\n%d", *p);
    printf("\n%d", &a);
    printf("\n%d", &p);

    int arr[] = {1, 2, 3, 4, 5};
    // the below statement can also be written as
    // 'int *ptr;'
    // 'ptr = arr;'
    int *ptr = arr;

    // as seen above, we shouldn't write 'int *p = &arr' because 'arr' is an array not a variable it itself gives address
    int i = 0;

    printf("\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }
}