#include <stdio.h> //引入stdio.h(標準輸入輸出標頭檔案)

int main()
{
    float input;
    scanf("%f", &input); // 輸入
    input = input * 23.34;
    printf("%.2f", input); // 輸出

    return 0;
}