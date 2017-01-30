#include <stdio.h>

int main(void){
    char a = 7;
    char b = 3;

    printf("%d\n", a | b);
    printf("%d\n", a ^ b);
    printf("%d\n", ~(~a & ~b));
    printf("%d\n", a << 1);
    printf("%d\n", a >> 2);
}
