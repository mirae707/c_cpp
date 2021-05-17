#include <stdio.h>

int main(void){
    int a, sum;
    printf("Enter a numsumer: ");
    scanf("%d", &a);

    sum = (a + 1) * a / 2;
    printf("Sum of 1 ~ %d is %d\n", a, sum);
    return 0;
}
