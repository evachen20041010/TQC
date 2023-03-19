#include <stdio.h>

int compute(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        printf("fib(%d)=%d\n", i, compute(i));
    }
    return 0;
}