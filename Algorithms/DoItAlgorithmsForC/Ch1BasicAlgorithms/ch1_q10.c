#include <stdio.h>

int main(void){
    int a, b;
    printf("Enter a number of a: ");
    scanf("%d", &a);
    printf("Enter a number of b: ");
    scanf("%d", &b);

    while (a > b){
        printf("a보다 큰 값을 입력하세요!\n");
        printf("\nEnter a number of a: ");
        scanf("%d", &a);
        printf("Enter a number of b: ");
        scanf("%d", &b);
    }

    printf("\nb - a is %d\n", b-a);

    return 0;
}
