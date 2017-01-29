#include <stdio.h>

char soundex(char c);
void doSoundex(char *ca);

int main(int argc, char *argv[]){
    if(argc == 1){
        printf("werte fehlen!\n./soundex <name> <noch a name> ...\n");
        return 0;
    }
    for(int i = 1; i < argc; i++){
        doSoundex(argv[i]);
    }
}

void doSoundex(char *ca){
    char *scp = ca;
    char sc[7];
    sc[0] = *ca;
    ca++;
    int i = 1;
    while(*ca && i < 6){
        char s = soundex(*ca);
        if(s != '0' && sc[i-1] != s){
            sc[i] = s;
            i++;
        }
        ca++;
    }
    for(; i < 6; i++){
        sc[i] = '0';
    }
    printf("%s:\t%s\n",scp, sc);
}

char soundex(char c){
    switch(c){
        case 'b':
        case 'f':
        case 'p':
        case 'v':
            return 49;
        case 'c':
        case 'g':
        case 'j':
        case 'k':
        case 'q':
        case 's':
        case 'x':
        case 'z':
            return 50;
        case 'd':
        case 't':
            return 51;
        case 'l':
            return 52;
        case 'm':
        case 'n':
            return 53;
        case 'r':
            return 54;
        default:
            return 48;
    }
}
