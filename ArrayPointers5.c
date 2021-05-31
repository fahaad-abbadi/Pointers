#include <stdio.h>
int sum();

int main()
{
    int ans = sum();
    printf("%d", ans);
}

int sum()
{
    int i, sum = 0;
    int x[5] = {1, 2, 3, 4, 5};

    int *p = x;

    for (i = 0; i < 5; i++)
    {
        sum += *(p + i);
    }

    return sum;
}