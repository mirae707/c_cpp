#include <stdio.h>

int main(void){
    int i, j, k, num;
    char star = '*';
    scanf("%d", &num);

    for (i = 0; i < num; i++){
        for (k = num - i; k > 0; k--){
            printf(" ");
        }
        for (j = 0; j < num; j++){
            printf("%c", star);
            if (i == j)
                break;
        }
        printf("\n");
    }
    return 0;
}
