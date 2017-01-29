#include <stdio.h>

void voidpointer();

int main(void){
    voidpointer();
}

void voidpointer(){
    char s[] = "hallo";
    char a = 'A';
    char *cp = s;
    char *ap = a;
    void *vp = cp;
    int *ip;

    printf("cp: %s\n", cp);
    printf("ap: %c\n", ap);
    printf((s == cp) ? "== - ys\n" : "!= - nope\n");
    printf((s != cp) ? "!= - jo\n" : "== - nope\n");

    ip = vp;
    ip = cp;
    printf("%p\n", *ip);

    ip = (int *) cp;
    printf("%p\n", *ip);

    printf("end\n");
}
