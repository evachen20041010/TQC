#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *file_read, *file_write;
    char c;

    //開啟read.txt檔案
    file_read = fopen("read.txt", "r");
    if (file_read == NULL) {
        printf("無法開啟 read.txt 檔案\n");
        exit(EXIT_FAILURE);
    }
    //開啟write.txt檔案
    file_write = fopen("write.txt", "w");
    if (file_write == NULL) {
        printf("無法開啟 write.txt 檔案\n");
        exit(EXIT_FAILURE);
    }
    while ((c = fgetc(file_read)) != EOF) {
        // 加密所有小寫字母
        if (c >= 'a' && c <= 'z') {
            c = c + 2;
            // 超出 'z' 的範圍，則從 'a' 開始重新循環
            if (c > 'z') {
                c = c - 'z' + 'a' - 1;
            }
        }
        fputc(c, file_write);
    }
    fclose(file_read);
    fclose(file_write);

    return 0;
}