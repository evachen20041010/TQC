#include <stdio.h>
#include <math.h>

int compute(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        //計算整數的位數
        int temp = i;
        int digits = 0;
        while (temp != 0)
        {
            digits++;
            temp /= 10;
        }
        //計算整數的每個位數的次方和
        temp = i;
        int armstrong = 0;
        while (temp != 0)
        {
            int digit = temp % 10;
            armstrong += pow(digit, digits);
            temp /= 10;
        }
        //如果整數是阿姆斯壯數
        if (armstrong == i)
        {
            printf("%d\n", i);
            //加總
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int sum = compute(n);
    printf("%d\n", sum);

    return 0;
}