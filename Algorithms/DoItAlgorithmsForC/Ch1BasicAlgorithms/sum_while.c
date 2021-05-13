#include <stdio.h>

int main(void){
    int i, n;
    int sum;
    puts("1부터 n까지의 합을 구합니다.");
    printf("n의 값: ");
    scanf("%d", &n);
    sum = 0;

    /* i = 1;           */
    /* while (i <= n) { */
    /*     sum += i;    */
    /*     i++;         */
    /* }                */

    for(i = 1; i <= n; i++){
        sum += i;
        if(i == n)
            printf("%d = %d\n", i, sum);
        else
            printf("%d+", i);
    }
    return 0;
}
