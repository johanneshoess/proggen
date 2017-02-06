#include <stdio.h>

void iwas(int (*test)(int, int)){
    printf("das Ergebnis ist %d\n", test(2,3));
}

int sum(int x, int y){
    return x+y;
}

int main(void){
    iwas(sum);
}

// funktionszeiger rückgabewert mit tyoedef
