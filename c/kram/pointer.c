#include <stdio.h>

void erster();
void zweiter();
void dritter();

int main(void){
    dritter();
}

void dritter(){
    char ch;
    char *pc = &ch;
    char **ppc = &pc;
    char **xf[3][2]; // funktioniert auch mit nur einem * aber produziert warnung <<--
    char **(*px)[3][2] = &xf;

    ch = 'a';
    printf("%p %p %c\n", (void *) pc, (void *) ppc, **ppc);
    xf[0][1] = ppc;
    **(*px)[0][1] = 'b';
    printf("%c\n", ch);
}

void zweiter(){

    unsigned long l0 = 0;
    unsigned long l1 = 1;
    unsigned long l2 = 2;
    unsigned long *pl[3] = {&l0, &l1, &l2};
    printf("the long: %lu\n", *pl[1]);

    double d[3] = {1.0, 2.0, 3.0};
    double (*pd)[3] = &d;
    printf("the double: %f\n",(*pd)[2]);

    unsigned int u = 42;
    unsigned int *pu = &u;
    unsigned int *ppu = &pu; // muss nicht **ppu sein
    unsigned int ***pppu = &ppu;
    printf("the integer: %d\n",***pppu); //da immer nur auf nächstes feld verwiesen wurde
}

void erster(){
    int val = 42;
    int *ptr = &val;
    char c = 'a';
    char *cp = &c;
    char ca[2] = {'b','c'};
    char c2 = 'x';
    char *c2p = &c2;

    printf("%d %d %p %p\n", val, *ptr, (void *) &val, (void *) ptr);
    printf("%p\n", (void *) &ptr);
    printf("-- chars\n");
    printf("%c: %p\n", c,  &c);
    printf("%c: %p\n", ca[0], &ca[0]);
    printf("%c: %p\n", ca[1], &ca[1]);
    printf("%c: %p\n", c2, &c2);

    printf("\nc2p: %c\n", *c2p);
}
