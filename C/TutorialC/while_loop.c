/* while 문으로 반복 구문을 만들기 */

#include <stdio.h>

int main(void){
    int index = 1;
    // infinite loop
    while(index >= 1){
        printf("%d\n", index);
        index++;
    }

    // while 구문을 시작할 때 조건을 확인하고 싶지 않다면 do while 을 활용하기
    do {
        printf("%d\n", index);
        index++;
    } while(index <= 5);

    return 0;
}