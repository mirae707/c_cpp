/* scanf 를 이용하여 입력 받기 */

#include <stdio.h>

int main(void){
    int age;
    double gpa;
    char name[10];
    char fullname[20];

    printf("Enter your age: ");
    scanf("%d", &age); // age 변수에 입력값 저장
    printf("Your age is %d! Sooo old :)\n", age);

    printf("\nEnter your gpa: ");
    scanf("%lf", &gpa); // double 변수 입력시 lf 사용
    printf("Your gpa is %.2lf. Good job!\n", gpa); // 소숫점 자리수 제한 .(자리수)

    printf("\nEnter your name(first name): ");
    scanf("%s", name); // char 의 경우 & 를 안붙여줌
    printf("Is your name is %s? My name is %s too. Nice to meet you.\n", name, name); // scanf 함수로 입력시 공백을 기준으로 입력 받는게 끝나기 때문에 한 단어만 입력가능

    printf("\nEnter your name(full name): ");
    fgets(fullname, 20, stdin);
    printf("Is your name is %s? My name is %s too. Nice to meet you.\n", fullname, fullname); // fgets 로 입력시 공백 포함 저장 가능

    return 0;
}
