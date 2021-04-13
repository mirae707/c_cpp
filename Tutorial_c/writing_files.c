/* 외부 파일 읽고 쓰는 법 */

#include <stdio.h>

int main(void){

    // file mode: w 는 쓰기만 가능하여 내용을 덮어씌움.
    FILE *fpointer = fopen("employees.txt", "w");
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    fclose(fpointer);

    // file mode: a 는 추가가 가능하여 내용을 추가함.
    FILE *femployees = fopen("employees.txt", "a");
    fprintf(femployees, "\nJun, Developer");
    fclose(femployees);
}
