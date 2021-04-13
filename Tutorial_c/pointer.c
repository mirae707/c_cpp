/* pointer 사용법에 대해 알아보기 */

#include <stdio.h>

int main(void){
    int age = 30;
    int *pAge = &age; // 포인터 변수는 *를 앞에 붙여주고 변수에는 보통 소문자 p를 붙인다. 그리고 age 주소를 가리키는 &age 를 넣어준다.
    double gpa = 3.4;
    double *pGpa = &gpa;
    char grade = 'A';
    char *aGrade = &grade; // 물리적 메모리주소를 포인터 변수에 저장

    printf("age's memory address: %p\n", &age);
    printf("%d", *pAge); // 포인터 변수로 %d 로 출력하면 age 값이 출력된다.
    printf("%d\n", *&age);
    return 0;
}
