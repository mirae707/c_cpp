#include <stdio.h>
#include <string.h>

int main(void){
    
    char myString[] = "My Name is Jun";
    char temp[50];

    printf("The string is: %s\n", myString);
    printf("The length is: %ld\n\n", strlen(myString));

    strncpy(temp, myString, sizeof(temp) - 1); // 대상, 소스, 크기 순으로 각각 지정가능
    printf("The string is: %s\n", temp);
    return 0;
}
