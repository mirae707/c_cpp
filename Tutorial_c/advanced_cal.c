/* 사칙연산을 선택가능한 계산기 */

#include <stdio.h>

int sum(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void){
    char op;
    int num1, num2;
    printf("정수 1을 입력하세요: ");
    scanf("%d", &num1);
    printf("계산할 연산자를 입력하세요: ");
    scanf(" %c", &op); // %c 앞에 공백으로 null 값을 넣어준다. 왜?
    printf("정수 2을 입력하세요: ");
    scanf("%d", &num2);

    if(op == '+')
        printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
    else if(op == '-')
        printf("%d - %d = %d\n", num1, num2, sub(num1, num2));
    else if(op == '*')
        printf("%d * %d = %d\n", num1, num2, mul(num1, num2));
    else if(op == '/')
        printf("%d / %d = %d\n", num1, num2, div(num1, num2));
    else
        printf("잘못입력하셨습니다.\n");

    return 0;
}

int sum(int num1, int num2){
    return num1 + num2;
}
int sub(int num1, int num2){
    return num1 - num2;
}
int mul(int num1, int num2){
    return num1 * num2;
}
int div(int num1, int num2){
    return num1 / num2;
}