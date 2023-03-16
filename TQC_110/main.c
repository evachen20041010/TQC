#include <stdio.h>

int main()
{
    int a, b, c;
    float output;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    //(2)
    if (a >= 60 && a < 100)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    //(3)
    output = ((float)b + 1) / 10;
    output = round(output * 100) / 100; // round()四捨五入到整數，先乘100保留小數點後的兩位，最後再除100回來
    printf("%.2f\n", output);           // 輸出限制小數點後只能有兩位數

    //(4)
    if (a > c)
    {
        printf("%d\n", a);
    }
    else
    {
        printf("%d\n", c);
    }

    return 0;
}