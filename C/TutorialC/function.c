/* 함수 사용법 */

#include <stdio.h>
#include <stdlib.h>

 double cube(double num); // 여기서 함수를 선언하고 나중에 작성하면 함수 호출이 가능하다. (* 이런식으로 많이 선언을 먼저하고 main함수를 쓴 다음 부수적인 함수 작성하는 식으로 많이 사용한다.)

// 이 함수는 어떤 value 도 반환하지 않는다. 그냥 실행된다.
 void sayHi(char name[], int age){
     printf("Hello %s! You are %d.\n", name, age);
 }


int main(void){

    printf("Answer: %lf\n", cube(2));

    sayHi("Jun", 27);
    sayHi("Mike", 35);
    sayHi("Kang", 10);
    return 0;
}

// return 값을 반환한다.
 double cube(double num){
     double result = num * num * num;
     return result;
     printf("What?\n"); // return 후에는 함수를 빠져나가므로 출력안됨.
 }