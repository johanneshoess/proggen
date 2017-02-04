#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definitiv zuende programmieren, das sollte sich absolut lohnen!

typedef struct _person {
    char name[30];
    struct _person *next;
} person;

int main(int argc, char *argv[]){
    int zahl;
    sscanf (argv[1],"%d",&zahl);

    person *head;
    person *p;

    head = malloc(sizeof (person));
    p = head;
    strcpy(p->name, argv[2]);


    for(int i = 3; i < argc; i++){
        person *tmp = p;
        p = malloc(sizeof (person));
        strcpy(p->name, argv[i]);
        tmp->next = p;

    }

    p->next = head;
    printf("wir fangen an bei %s\n", p->name);
    person *last;

    while(p != p->next){
        int round = zahl;
        while(round > 0){
            last = p;
            p = p->next;
            round--;
        }
        printf("%s ist raus\n", p->name);
        last->next = p->next;
        p = p->next;
        last = p;
        //free(last);
    }
    printf("übrig ist %s!\n", p->name);
}
