/* 외부 파일 읽고 쓰는 법 */

/** #include <stdio.h>                                                            */
/**                                                                               */
/** int main(void){                                                               */
/**     FILE *fpointer = fopen("employees.txt", "w");                             */
/**     fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting"); */
/**     [> fprintf(fpointer, "overwritten"); <]                                   */
/**                                                                               */
/**     fclose(fpointer);                                                         */
/** }                                                                             */

#include <stdio.h>

int main(void){
    FILE *fpointer = fopen("employees.txt", "w");
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    /** fprintf(fpointer, "overwritten"); */

    fclose(fpointer);
}
