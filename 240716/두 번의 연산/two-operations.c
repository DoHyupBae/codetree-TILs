#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d", &a);
    if(a & 0x01){ // 홀수인지 체크, 비트연산 적용해봄
        a += 3;
    }
    if(a % 3 == 0){
        a /= 3;
    }
    printf("%d\n", a);
    return 0;
}