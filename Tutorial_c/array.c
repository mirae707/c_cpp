#include <stdio.h>

int main(void){
    int luckyNumbers[] = {2, 3, 5, 7, 10, 12, 25};
    luckyNumbers[2] = 100;
    printf("%d\n", luckyNumbers[2]);

    return 0;
}