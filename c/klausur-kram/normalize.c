#include <stdio.h>
#include <stdlib.h>

void normalize(char *string);

int main(int argc, char *argv[]){

    normalize(argv[1]);
}

void normalize(char *string){
    char *p = string;
    int i = 0;
    for(;*p;p++){
        i++;
    }
    char *write = malloc(i+1);
    char * start = *write;
    for(;string;string++){
        *write = *string;
        write++;
    }
    *write = '\0';
    printf("%s\n", start);
}
