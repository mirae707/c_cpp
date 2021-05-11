/* 파일을 읽어 오는 방법 */

#include <stdio.h>

int main(void){
    char line[255];
    FILE *fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer); // 첫 번째 줄을 읽어옴
    printf("%s", line);
    fgets(line, 255, fpointer); // 두 번째 줄을 읽어옴
    printf("%s", line);

    fclose(fpointer);
    return 0;
}
