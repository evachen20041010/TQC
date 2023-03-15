#include <stdio.h> //引入stdio.h(標準輸入輸出標頭檔案)

int main()
{
    int input;
    scanf("%d", &input); // 輸入
    input += 9;          // 相加後賦值
    printf("%d", input); // 輸出

    return 0;
}