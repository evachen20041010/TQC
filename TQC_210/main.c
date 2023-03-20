#include <stdio.h>

// 最大公因數 輾轉相除法
int gcd(int m, int n)
{
    if (n == 0)
    {
        return m;
    }
    else
    {
        return gcd(n, m % n);
    }
}

// 最小公倍數 (公式：兩數相乘/最大公因數)
int lcm(int m, int n)
{
    return m * n / gcd(m, n);
}

// 主程式
int main(void)
{
    int m, n;

    scanf("%d", &m);
    scanf("%d", &n);
    
    printf("%d\n", gcd(m, n));
    printf("%d", lcm(m, n));

    return 0;
}