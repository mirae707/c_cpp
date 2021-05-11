/* 어떤 형식에 맞추어 시간이 입력될 때, 그대로 출력하는 연습을 해보자. */

#include <stdio.h>

int main(void){
    int hour, min;
    scanf("%d:%d", &hour, &min);
    printf("%d:%d", hour, min);
    return 0;
}
