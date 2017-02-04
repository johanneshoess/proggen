#include <stdio.h>
#include <string.h>


struct person{
    char name[40];
    unsigned int id;
};
void ersterStreich();
void change(struct person *pp);

int main(void){
    ersterStreich();
}

void ersterStreich(){
    struct person susi;

    struct person rudi;
    struct person willi = {
        "der Willi", 1815
    };
    struct person votan = {.id = 666, .name = "der alde Voti"};

    strcpy(susi.name, "die Suse"); //testen ob ohne kopie nur verweis existiert, '->' oder pointer gehn nicht

    susi.id = 8811;
    rudi = willi; //kopierter wert
    willi.name[0] = 'X';
    willi.id = 999;

    printf("%6d %s\n", susi.id, susi.name);
    printf("%6d %s\n", willi.id, willi.name);
    printf("%6d %s\n", rudi.id, rudi.name);
    printf("%6d %s\n", votan.id, votan.name);
    printf("%6ld %s\n", sizeof (struct person), "sizeof");



    struct person *pp = &rudi;
    change(pp);

    printf("%6d %s\n", pp->id, pp->name);

    struct node{
        int data;
        struct node *next;
    };

    struct node c = {17, NULL};
    struct node b = {1, &c};
    struct node a = {2, &b};
    struct node *lb = &a;
    printf("%6s %d\n","data", lb->next->next->data);
}

void change(struct person *pp){
    strcpy(pp->name, "ein neuer Rudi!");
    pp-> id = 99244;
}
