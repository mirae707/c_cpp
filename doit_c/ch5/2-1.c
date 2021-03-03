/* Sum 함수 호출하기 */
#include <stdio.h>

int Sum(int value1, int value2){
    int result = value1 + value2;
    return result;
}

int main(void){
    int s, num1, num2;
    scanf("%d %d", &num1, &num2);

    s = Sum(num1, num2);
    printf("더하기 작업의 결과는 %d\n", s);
}
