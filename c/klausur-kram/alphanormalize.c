#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void normalize(char * str);

int main(void){
    char *ca = "ACabcxabyizd";
    printf("normal: %s\n", ca);
    normalize(ca);
    printf("after: %s\n", ca);
}

void normalize(char * str){
    char *akt;
    akt = str;
    char *write = malloc((strlen(str)+1)*sizeof(char));
    str = write;
    *write = *akt;
    akt++;
    while(*akt){
        if(*akt >= *write){
            write++;
            *write = *akt;
        }
        akt++;
    }
    write++;
    *write = '\0';
    printf("der string: %s\n", str);
}
