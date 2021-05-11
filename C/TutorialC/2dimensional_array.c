/* 2차원 배열 */

#include <stdio.h>

int main(void){
    int i, j;
    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    /* [> printf("%d", nums[2][1]); <] */
    for (i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}
