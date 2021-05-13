#include <stdio.h>

int main(void){
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n > 0)
        printf("This number is a positive number.\n");
    else if(n < 0)
        printf("This number is a negative number.\n");
    else
        printf("This number is a zero.\n");
    return 0;
}
