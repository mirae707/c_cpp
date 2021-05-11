#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Student 에 저장할 자료형을 미리 선언
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(void){
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jun");
    strcpy(student1.major, "Computer Science");

    struct Student student2;
    student2.age = 25;
    student2.gpa = 3.8;
    strcpy(student2.name, "Amy");
    strcpy(student2.major, "Computer Science");

    printf("%s\n", student2.name);
    return 0;
}