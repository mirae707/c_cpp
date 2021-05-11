/* switch 구문을 이용하여 성적에 따른 문구 출력하기 */

#include <stdio.h>

int main(void){
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("You did great!\n");
        break;
    case 'B':
        printf("You did alright!\n");
        break;
    case 'C':
        printf("You did poorly\n");
        break;
    default:
        break;
    }
}