#include <stdio.h>
#include <stdlib.h>

int* filter(int (*fun)(int), int *src, int len);
int check(int d);

int main(void){
    int ar[10] = {25, 52, 89, 42, 290, 233, 7, 877, 77, 90};
    int *start;
    int *erg = filter(check, ar, 10);
    start = erg;
    for(;*erg; erg++){
        printf("%d ", *erg);
    }
    printf("\n");
    free(start);
}

int check(int d){
    if(d <= 255 && d >= 25){
        return 1;
    }else{
        return 0;
    }
}

int* filter(int (*fun)(int), int *src, int len){
    //int ret[sizeof(int)*len];
    int *ret = malloc(sizeof(int)*len);
    int k = 0;
    for(int i = 0; i<len; i++){
        if(fun(src[i])){
            ret[k] = src[i];
            k++;
        }
    }
    if(k < 10){
        ret[k] = '\0';
    }
    int *p;
    p = ret;
    for(; *p; p++){
        printf("%d ", *p);
    }
    printf("\n");

    return ret;
}
