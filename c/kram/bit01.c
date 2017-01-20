#include <stdio.h>


enum Scheine { Prog1 = 1<<0,
                Prog2 = 1<<1,
                Prog3 = 1<<2,
                ADS = 1<<3,
                Theo = 1<<4};

void printschein(int s){
    if(s & Prog1) printf("Programmieren1 ");
    if(s & Prog2) printf("Programmieren2 ");
    if(s & Prog3) printf("Programmieren3 ");
    if(s & ADS) printf("AlgoUndDaten ");
    if(s & Theo) printf("Theologie ");
    printf("\n");
}

int main(int argc, char* argv[])
{
    enum Scheine Susi = Prog1 | Prog2 | Prog3;
    int Rudi = ADS | Theo | Prog3;

    printschein(Susi);
    printschein(Rudi);
    printschein(Rudi | Susi);
    printschein(Rudi&Susi);
    printschein(~Susi);
    return 0;
}


