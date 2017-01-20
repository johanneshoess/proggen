#include <stdio.h>

// Funktionsprototypen
void useFor(int k);
void useWhile(int k);
void useDoWhile(int k);
void useIf(int k);
void switchCase(int k);

int main(int argc, char * argv[]){
    useFor(2);
    useWhile(3);
    useDoWhile(0);
    useIf(-1);
    switchCase(3);
}

void useFor(int k){
    for(int i = 0; i < k; i++){
        printf("%d. print of FOR\n", i+1);
    }
}

void useWhile(int k){
    int i = k;
    while(k > 0){
        printf("%d. druck von WHILE\n", i-k+1);
        k--;
    }
}

void useDoWhile(int k){
    int i = k;
    do{
        printf("DO %d. print WHILE k > 0\n", i-k+1);
        k--;
    }while(k > 0);
}

void useIf(int k){
    if(k){
        printf("print IF k is not 0\n");
    }
}

void switchCase(int k){
    switch(k){
        case 1:
            printf("hier wurde der erste CASE angesteuert\n");
            break;
        case 2:
            printf("und der zweite CASE folgt angesteuert\n");
            break;
        case 3:
            printf("hier der dritte CASE\n");
            break;
    }
}
