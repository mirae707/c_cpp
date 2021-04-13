/* if 조건문 */

#include <stdio.h>
#include <stdlib.h>

// 최댓값 찾는 함수
int max(int num1, int num2, int num3){
    int result;

    if(num1 >= num2 && num1 >= num3){
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3){
        result = num2;
    }
    else if(num3 >= num1 && num3 >= num2){
        result = num3;
    }
    return result;
}

int main(void){
    printf("%d\n", max(7, 6, 2)); // max 함수 호출
    return 0;
}