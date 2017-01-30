#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * komprimierer(char * ca);
char * dekomprimierer(char * ca);

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("hier fehlt ganz gewaltig was!\n./komp komprimier <string>\n./komp dekomprimier <string>\n--\n");
    }
    if(strcmp(argv[1], "komprimier") == 0){
        char *cp = komprimierer(argv[2]);
        printf("komprimiert: %s\n", cp);
        free(cp);
    }else if(strcmp(argv[1], "dekomprimier") == 0){
        char *cp = dekomprimierer(argv[2]);
        printf("dekomprimiert: %s\n", cp);
        free(cp);
    }
}

char * komprimierer(char * ca){
    char *ncp = malloc(64);
    char *start = ncp;
    char c = *ca;
    ca++;
    int i = 1;
    while(*ca){
        if(*ca == c){
            i++;
        }else{
            if(i > 1){
                *ncp = i+48;
                ncp++;
                *ncp = c;
                ncp++;
                i = 1;
            }else{
                *ncp = c;
                ncp++;
            }
        }
        c = *ca;
        ca++;
    }
    return start;
}

char * dekomprimierer(char * ca){
    char *ncp = malloc(64);
    char *start = ncp;
    while(*ca){
        *ncp = *ca;
        ca++; ncp++;
    }
    return start;
}
