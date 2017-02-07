#include <stdio.h>
#include <stdlib.h>

typedef struct _person{
    char name[30];
    struct _person *next;
}person;

int main(void){
    char *names[] = {"Hannes", "Sebl", "Kadda", "Kalle", "Nils"};
    person *head;
    person *p;


    printf("größe des struct = %lu\n", sizeof(person));
}
