#include <stdio.h>

int main(void){
    int a, i;
    printf("Enter an integer: ");
    scanf("%d", &a);

    while (a < 0) {
        printf("Positive Integer!!\n");
        printf("\nEnter an integer (positive): ");
        scanf("%d", &a);
    }

    for(i = 1; a > 9; i++, a /= 10);

    printf("a는 %d자리 수 입니다.\n", i);

    return 0;
}
