#include <stdio.h>

typedef struct _knoten {
    int wert;
    struct _knoten *left;
    struct _knoten *right;
}knoten;

knoten* add(int w, knoten* start);
void printTree(knoten * start);

int main(void){
    knoten* erster = NULL;
    erster = add(4, erster);
    erster = add(3, erster);
    erster = add(5, erster);
    erster = add(9, erster);
    erster = add(2, erster);
    printTree(erster);
}


knoten* add(int w, knoten* start){
    if(start != NULL){
        if(start->wert < w){ //
            start->right = add(w, start->right);
        }else if(start->wert > w){
            start->left = add(w, start->left);
        }
        else if(start->wert == NULL){
            start->wert = w;
        }
    }else if(start == NULL){
        start = malloc(sizeof(knoten));
        start->wert = w;
        start->left = NULL;
        start->right = NULL;
    }
    return start;
}

void printTree(knoten * start){
    if(start != NULL){
        printf("wert: %d\n", start->wert);
        printTree(start->left);
        printTree(start->right);
    }
}

