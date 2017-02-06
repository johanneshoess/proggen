#include <stdio.h>
#include <stdlib.h>

void normalize(char * string);

int main(void){
    char string[] = "w\tas      auch      immer \t     -\t- und      hier     noch      was...      auc\tch";
    printf("Eingabe:\t%s\n", string);
    normalize(string);
    printf("Ausgabe:\t%s\n", string);
}

void normalize(char * string){
    char *p;
    char *start;
    start = string;
    p = string;

    while(*p){
        if(*p == ' ' | *p == '\t'){

            if(*--string == ' '){
                p++;
                string++;
            }else{
                string++;
                *string = ' ';
                string++;
                p++;
            }
        }else{
            *string = *p;
            p++;
            string++;
        }
    }
    *string = '\0';

    printf("Funktion:\t%s\n", start);
}
