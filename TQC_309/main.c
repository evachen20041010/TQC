#include <stdio.h>

float compute(int input[])
{
    float frac1 = (float)input[0] / input[3];
    float frac2 = (float)input[1] / input[4];
    float frac3 = (float)input[2] / input[5];
    float min = frac1;
    if (frac2 < min)
    {
        min = frac2;
    }
    if (frac3 < min)
    {
        min = frac3;
    }
    return min;
}

int main()
{
    int input[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &input[i]);
    }
    float min = compute(input);
    printf("%.3f\n", min);
    return 0;
}