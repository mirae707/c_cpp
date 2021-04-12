/* 함수 사용법 */

#include <stdio.h>

int main(void){
    sayHi("Jun", 27);
    sayHi("Mike", 35);
    sayHi("Kang", 10);
    return 0;
}

// 이 함수는 어떤 value 도 반환하지 않는다. 그냥 실행된다.
 void sayHi(char name[], int age){
     printf("Hello %s! You are %d.\n", name, age);
 }