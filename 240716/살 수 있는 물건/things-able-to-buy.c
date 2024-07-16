#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int money;
    scanf("%d\n", &money);


    if(money >= 3000){
        printf("book");
    }else if(money >= 1000){
        printf("mask");
    }else{
        printf("no");
    }
    return 0;
}