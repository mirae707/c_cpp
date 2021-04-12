/* 자료형에 대한 간단한 탐구 */

#include <stdio.h>

int main(void){
    int age = 22; // 정수형
    float gpa = 3.8; // 실수형
    char grade = 'A'; // 문자형 '' 따옴표 안에 문자 하나만 저장
    char phrase[] = "Jun's Academy"; // 한 문자 이상은 배열을 사용하여 저장

    printf("Hello, Welcome to %s.\nMy name is Jun. I'm %d years old.\nMy gpa score is %.1f and grade is %c\n\nThank you!\n", phrase, age, gpa, grade);
    return 0;
}
