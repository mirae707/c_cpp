#include <stdio.h>
#include <string.h>

int main(void){

    char src[50], dest[50];

    strcpy(src, " This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 15); // dest 에 src 를 합침

    printf("Final destination string : |%s|", dest);

    return 0;
}
