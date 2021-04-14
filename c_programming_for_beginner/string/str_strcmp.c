#include <stdio.h>
#include <string.h>

int main(void){

    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A")); // 같으면 0 출력

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B")); // 뒤에 있는 B가 더 크므로 -1 출력

    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A")); // 앞에 있는 B가 더 크므로 1 출력

    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "A"));

    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z", "a"));

    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));

    printf("strcmp(\"apple\", \"apple\") is ");
    printf("%d\n", strcmp("apple", "apple"));
}
