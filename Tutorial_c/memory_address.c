/* 메모리에 저장되는 원리 살펴보기 -> 포인터?? */

#include <stdio.h>

int main(void){
    int age = 30; // 우리가 선언하는 모든 변수는 각각 (물리적)메모리에 주소가 할당되어 저장된다.
    double gpa = 3.4;
    char grade = 'A';

    printf("age's memory address is > %p\n", &age); // 메모리 주소를 가리키는 %p 를 사용하여 주소를 출력할 수 있다.
    printf("gpa's memory address is > %p\n", &gpa); // 메모리 주소를 가리키는 %p 를 사용하여 주소를 출력할 수 있다.
    printf("grade's memory address is > %p\n", &grade); // 메모리 주소를 가리키는 %p 를 사용하여 주소를 출력할 수 있다.
    // 각각 다 다른 주소에 저장된 것을 확인 할 수 있다. 변수 앞에 &를 붙여줘야 주소를 불러올 수 있다.

    return 0;
}
