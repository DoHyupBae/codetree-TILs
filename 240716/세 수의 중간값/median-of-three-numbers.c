#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int result;
    if(b > a && b < c) result = 1;
    else result = 0;

    printf("%d", result);
    return 0;
}