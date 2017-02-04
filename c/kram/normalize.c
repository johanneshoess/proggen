#include <stdio.h>
#include <stdlib.h>

void normalize(char * string);

int main(void){
    char string[] = "was auch immer \t      und hier noch was... auc\tch";
    printf("Eingabe: %s\n", string);
    normalize(string);
    printf("Ausgabe: %s\n", string);
}

void normalize(char * string){
    char *p;
    char *start;
    char *last;
    last = string;
    p = string;
    start = string;
    for(; *p; p++){
        if(*p == ' ' || *p == '\t'){
            if(!(*last == ' ')){
                last = string;
                *string = ' ';
                string++;
            }
        }else{
            *string = *p;
            string++;
        }
    }
    printf("Funktion: %s\n", start);
}
