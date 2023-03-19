#include <stdio.h>

void Zero(){
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            printf("%d x %d = %d\t",i,j,i*j);
        }
        printf("\n");
    }
}

void One(){
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            printf("%d x %d = %d\t",j,i,i*j);
        }
        printf("\n");
    }
}

int main()
{
    int input;
    scanf("%d", &input);
    if(input == 0){
        Zero();
    }else if(input == 1){
        One();
    }else{
        printf("error");
    }
}