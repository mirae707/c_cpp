/* 년, 월, 일을 입력받아 지정된 형식으로 출력하는 연습을 해보자. */

#include <stdio.h>

int main(void){
    int year, month, day;
    scanf("%d.%d.%d", &year, &month, &day);
    printf("%04d.%02d.%02d", year, month, day);
    return 0;
}
