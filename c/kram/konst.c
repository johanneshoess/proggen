#include <stdio.h>

int main(void){

    char c[99];

    const char *a = c; //veränderbarer Zeiger, konstantes Zeichen
    a[1] = 'h'; //verboten
    a++; //erlaubt

    char *const x = c; //konstanter Zeiger, veränderbares Zeichen
    x[0] = 'x'; //erlaubt
    x++; //verboten

    const char *const z = "Fixer String";
    //alles verboten außer fragen
}
