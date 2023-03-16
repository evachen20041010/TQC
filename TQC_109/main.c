#include <stdio.h>

// 定義函式math
int math(int num)
{
    if (num % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    return 0;
}

int main()
{
    int input;
    scanf("%d", &input);

    if (input < 0 || input > 100)
    {
        printf("error");
    }
    else if (input >= 60)
    {
        printf("pass\n");
        math(input); // 呼叫函式math
    }
    else if (input < 60)
    {
        printf("fail\n");
        math(input);
    }
    return 0;
}