/* 바로 "45분 일찍 알람 설정하기"이다. */
#include <stdio.h>

int main(void){
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    if (hour == 0){
        if (minute >= 45 && minute <= 59)
            printf("%d %d", hour, minute - 45);
        else if (minute > 0 && minute < 45)
            printf("%d %d", 23, minute + 15);
        else if (minute == 0)
            printf("%d %d", 23, 15);
    }
    else{
        if (minute >= 45 && minute <= 59)
            printf("%d %d", hour, minute - 45);
        else if (minute > 0 && minute < 45)
            printf("%d %d", hour - 1, minute + 15);
        else if (minute == 0)
            printf("%d %d", hour - 1, 15);
    }
    return 0;
}
