#include <stdio.h>

int main(void) {
int i, a, b, c=0;

for (i=0; i < 17; i++){
        a = i ^ 10;
        b = 17 / (a + 1);
        c = a + b + c;
    }
    printf("Fertig! Ergebnis = %d\n",c);
}
