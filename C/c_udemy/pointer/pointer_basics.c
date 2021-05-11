/* #include <stdio.h>                                                             */
/*                                                                                */
/* int main(void){                                                                */
/*     int num = 5;                                                               */
/*     int *pnum = NULL;                                                          */
/*     pnum = &num;                                                               */
/*                                                                                */
/*     printf("num is %d\n", num);                                                */
/*     printf("pnum is %d\n", *pnum);                                             */
/*     printf("num's address is %p\npnum's address is %p\n", &num, (void*)&pnum); */
/*                                                                                */
/*     return 0;                                                                  */
/*                                                                                */
/* }                                                                              */

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num = 150;
    int *pNum = NULL;

    pNum = &num;

    printf("Address of num: %p\n", &num);
    printf("Address of pNum: %p\n", &pNum);
    printf("Value of the pNum: %d\n", *pNum);
    printf("Value of what pNum is pointing to: %d\n", *pNum);
}
