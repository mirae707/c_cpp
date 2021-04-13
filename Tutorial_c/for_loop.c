/* for 함수를 이용하여 loop 만들기 */
#include <stdio.h>

int main(void){
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", luckyNumbers[i]);
    }
}
