/* #include <stdio.h>                                         */
/* #include <string.h>                                        */
/*                                                            */
/* int mk_strlen(char text[]);                                */
/*                                                            */
/* int main(void){                                            */
/*                                                            */
/*     char text[] = "How long are this strings?";            */
/*                                                            */
/*     printf("내가 만든 strlen: %d\n", mk_strlen(text)); */
/*     printf("원래      strlen: %ld\n", strlen(text));     */
/* }                                                          */
/*                                                            */
/* int mk_strlen(char text[]){                                */
/*                                                            */
/*     int i = 0;                                             */
/*                                                            */
/*     for(i = 0; text[i] != '\0'; i++);                      */
/*     return i;                                              */
/* }                                                          */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(const char string[]);
void concat(char result[], const char str1[], const char str2[]);
bool equalStrings(const char s1[], const char s2[]);

int main(){

    const char word1[] = "jun";
    const char word2[] = "ok";
    const char word3[] = "whatever";
    char result[50];

    printf("%d    %d    %d\n", stringLength(word1), stringLength(word2), stringLength(word3));

    concat(result, word1, word2);
    printf("\n%s\n", result);

    printf("\n%d\n", equalStrings("Jason", "Jason"));
    printf("%d\n", equalStrings("Jasons", "Jason"));

    return 0;
}

int stringLength(const char string[]){
    int count = 0;
    for(count = 0; string[count] != '\0'; count++);
    return count;
}

void concat(char result[], const char str1[], const char str2[]){

    int i, j;

    for (i = 0; str1[i] != '\0'; i++)
        result[i] = str1[i];

    for (j = 0; str2[j] != '\0'; j++)
        result[i+j] = str2[j];

    result[i+j] = '\0';
}

bool equalStrings(const char s1[], const char s2[]){
    int i = 0;
    bool isEqauls = false;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;

    if(s1[i] == '\0' && s2[i] == '\0')
        isEqauls = true;

    return isEqauls;
}
