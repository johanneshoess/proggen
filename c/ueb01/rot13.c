#include <stdio.h>

int main(void){
    int c;
    while((c = getchar()) != EOF){
        if((97 <= c) && (c <= 122)){
            putchar((c+13) > 122 ? ((c+13)%122)+96 : (c+13));
        }else if((65 <= c) && (c <= 90)){
            putchar((c+13) > 90 ? ((c+13)%90)+64 : (c+13));
        }else{
            putchar(c);
        }
    }
}
