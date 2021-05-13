#include <stdio.h>

int max4(int a, int b, int c, int d);
int min4(int a, int b, int c, int d);
int med3(int a, int b, int c);

int main(void){
    int a, b, c, d;

    printf("Enter number1: \n");
    scanf("%d", &a);
    printf("Enter number2: \n");
    scanf("%d", &b);
    printf("Enter number3: \n");
    scanf("%d", &c);
    printf("Enter number4: \n");
    scanf("%d", &d);

    printf("This is a program of comparing number!\n");
    printf("The Maximum number of list is a %d\n", max4(a, b, c, d));
    printf("The Minimum number of list is a %d\n", min4(a, b, c, d));
    printf("The Middle number of list is a %d\n", med3(a, b, c));
}

int max4(int a, int b, int c, int d){
    int max = 0;

    max = a;
    max = max > b ? max : b;
    max = max > c ? max : c;
    max = max > d ? max : d;

    return max;
}

int min4(int a, int b, int c, int d){
    int min = 0;

    min = a;
    min = min < b ? min : b;
    min = min < c ? min : c;
    min = min < d ? min : d;

    return min;

}

int med3(int a, int b, int c){
    if(a >= b)
        if(b >= c)
            return b;
        else if(a <= c)
            return a;
        else
            return c;
    else if(a > c)
        return a;
    else if(b > c)
        return c;
    else
        return b;
}
