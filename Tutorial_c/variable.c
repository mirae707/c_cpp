/* 한 번에 여러 값을 바꾸고 싶은 경우 변수 사용 */

#include <stdio.h>

int main(void){
    char name[] = "Jun"; // char 는 기본적으로 한 글자만 되므로 배열 이용
    int age = 27;
    printf("There once was a man named %s\n", name); // name 한 글자 이상 출력하기 위해 string의 %s 를 사용
    printf("he was %d years old.\n", age);

    age = 28;
    printf("He really liked the name %s\n", name);
    printf("but did not like being %d.\n", age);
}
