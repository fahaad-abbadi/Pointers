#include <stdio.h>

// whenever we pass an array to a function then we can pass in the both ways 'int a[]' or 'int *a'
void fun1(int x[]);
void fun2(int *y);

void main()
{
    int a[5] = {11, 22, 33, 44, 55};

    int(*p)[5];
    // we can write using parentheses but 'int *p[5]' gives compilation error
    p = &a;
    printf("%d\n", (*p)[3]);

    fun1(a);
    fun2(a);
}

void fun1(int x[])
{
    int i;
    int *p = x;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
}

void fun2(int *y)
{
}