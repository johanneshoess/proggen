#include <stdio.h>
#include <stdlib.h>

char * myStrcpy(char * dst, char * src);

int main(void){
    char txt[] = "was auch immer das sein soll!";
    char * cp = malloc(sizeof(txt));
    myStrcpy(cp, txt);
    for(int i = 0;i< sizeof(txt); i++){
        txt[i] = '-';
    }
    printf("src: %s\n", txt);
    printf("dst: %s\n", cp);
}

char * myStrcpy(char * dst, char * src){
    char * start;
    start = dst;
    while(*src){
        *dst = *src;
        dst++; src++;
    }
    *dst = '\0';
    return start;
}
