#include <stdio.h>
#include <string.h>

int main() {
    char str1[21], str2[21], combined[41];
    int len1, len2, i, j;
    
    // 讀取兩個字串
    scanf("%s", str1);
    scanf("%s", str2);
    // 檢查字串長度
    len1 = strlen(str1);
    len2 = strlen(str2);
    if (len1 <= 3 || len1 > 20 || len2 <= 3 || len2 > 20) {
        printf("error\n");
        return 0;
    }
    // 連結兩個字串
    strcpy(combined, str1); //複製
    strcat(combined, str2); //連接
    // 反轉連結後的字串
    for (i = 0, j = strlen(combined) - 1; i < j; i++, j--) {
        char temp = combined[i];
        combined[i] = combined[j];
        combined[j] = temp;
    }
    printf("%d\n%d\n", len1, len2);
    printf("%s\n", combined);
    
    return 0;
}