#include <stdio.h>

int main(void){
    int a, b, c;
    printf("세 정수의 최댓값을 구합니다.\n");
    printf("a의 값을 입력하세요: "); scanf("%d", &a);
    printf("b의 값을 입력하세요: "); scanf("%d", &b);
    printf("c의 값을 입력하세요: "); scanf("%d", &c);

    if(b > a) a = b;
    if(c > a) a = c;

    printf("최댓값은 %d입니다.\n", a);

    return 0;
}
