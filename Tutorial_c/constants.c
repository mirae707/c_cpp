/* 상수 선언 및 사용 방법 */

#include <stdio.h>

int main(void){
    const int num = 5;
    printf("%d\n", num);
    /* num = 8; // 변수가 아니므로 수정 불가능 */
    printf("%d", num);
}
