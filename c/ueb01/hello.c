#include <stdio.h>

int main(int argc, char *argv[]){
    printf("Hello C World\n");
    int i;
    sscanf (argv[1],"%d",&i);
    printf("%d\n", i);
    printf("%s\n", argv[2]);
}
