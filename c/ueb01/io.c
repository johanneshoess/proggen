#include <stdio.h>

void printBin(unsigned int z);
void printInt(unsigned int z);

int main(void){
    int z = 0;
    unsigned int c;
    // immer vorhandenes mit 10 * nehmen und neues dazuaddieren
    while((c = getchar()) != EOF){
        z = c >= 48 ? z*10 + (c-48) : z;
    }
    printInt(z);
    printBin(z);
}

void printBin(unsigned int z){
    unsigned char ca[33];
    ca[32] = '\0';
    int n = 31;
    while(n >= 0){
        ca[n] =  ((z >> n)%2) != 0 ? (char) 49 : (char) 48;
        n--;
    }
    printf("bin: %s\n", ca);
}

void printInt(unsigned int z){
    printf("ganz: %d\n", z);
}
