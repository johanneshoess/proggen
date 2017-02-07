#include <stdio.h>
#include <stdlib.h>

char** zip(char *a, char *b){
    char *al;
    char *bl;
    al = a;
    bl = b;
    int i = 0;
    for(; *al && *bl; i++){
        al++; bl++;
    }
    printf("len: %d\n", i);
    char *arr[i];
    int k = 0;

    while(*a && *b){
        arr[k] = malloc(sizeof(char)*3);
        arr[k][0] = *a;
        arr[k][1] = *b;
        arr[k][2] = '\0';
        a++; b++; k++;
    }
    printf("hier das erste paar: %s\n", arr[2]);
    return arr;
}

void testfirst(void){
    char a[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    char b[] = {'A', 'B', 'C', 'D', '\0'};
    printf("a %s\n", a);
    char **barr = zip(a,b);
    printf("hier das erste paar: %s\n", barr[3]);
}

typedef struct _element{
    char *c;
    struct _element * next;
}element;

element* newzip(element *a, element *b);
void testscnd(void);

int main(void){
    testscnd();
}

void testscnd(void){
    element* a;
    element* b;


    char *cp = "abcde";
    element *p = malloc(sizeof(element));
    element *start;
    start = p;
    while(*cp){
        p->c = *cp;
        p->next = malloc(sizeof(element));
        p = p->next;
        cp++;
    }
    a = start;


    char *ncp = "ABC";
    p = malloc(sizeof(element));
    start = p;
    while(*ncp){
        p->c = *ncp;
        p->next = malloc(sizeof(element));
        printf("in p it is: %c and in ncp: %s\n", p->c, ncp);
        p = p->next;
        ncp++;
    }
    b = start;
    while(a->next != NULL){
        printf("in b: %c", a->c);
        a = a->next; //next scheint nicht zu existieren.. ohne das kommt der erste tupel
    }
    p = newzip(a,b);

    printf("element: %s\n",p->c);

    while(p->next){
        printf("element: %s\n",p->c);
        p = p->next;
    }
}

element* newzip(element *a, element *b){
    element *p;
    element *start;
    p = malloc(sizeof(element));
    start = p;
    printf("das a: %c\n", a->c);
    printf("das b: %c\n", b->c);
    while(a->next && b->next){
        if(p->next == NULL){
            p = malloc(sizeof(element));
        }
        p->c = malloc(sizeof(char)*3);
        p->c[0] = a->c;
        p->c[1] = b->c;
        p->c[2] = '\0';
        printf("hier ist das c: %s\n", p->c);
        a = a->next;
        b = b->next;
        p = p->next;
    }
    return start;
}

