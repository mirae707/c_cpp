#include <stdio.h>

int main(void){
    int i, j, num;
    char star = '*';
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        for (j = 1; j <= num; j++){
            printf("%c", star);
            if (i == j)
                break;
        }
        printf("\n");
    }
    return 0;
}
