/* mad libs 게임을 만들어보기 */

#include <stdio.h>

int main(void){
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter your favorite color: ");
    scanf("%s", color);

    printf("Enter your favorite plural noun: ");
    scanf("%s", pluralNoun);

    printf("Enter your favorite celebrity(full name): ");
    scanf("%s %s", celebrityF, celebrityL);

    printf("\nRoses are %s.\n", color);
    printf("%s are blue.\n", pluralNoun);
    printf("I love %s %s.\n", celebrityF, celebrityL);

    return 0;
}