/* 정수 a, b를 포함하여 그 사이의 모든 정수의 합을 구하는 아래 함수를 작성하세요.
 * int sumof(int a, int b); (a와 b의 대소 관계에 상관없이 합을 구하세요)
 */
#include <stdio.h>

int sumof(int a, int b);

int main(void){
    int a, b;
    printf("This program is Sum of between two numbers.\n");
    printf("Enter two numbers(sperated by a space):");
    scanf("%d %d", &a, &b);

    printf("\nSum of %d and %d is %d!\nThank you.\n", a, b, sumof(a, b));

    return 0;
}

int sumof(int a, int b){
    int temp = 0, sum = 0;
    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }
    for(int i = a; i <= b; i++)
        sum += i;
    return sum;
}
