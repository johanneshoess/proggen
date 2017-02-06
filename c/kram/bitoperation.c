#include <stdio.h>

int rgb(int r, int g, int b);
void getRgb(int color);

int main(void){
    unsigned int i = 123;
    unsigned int b = 1;
    printf("%d\n", i >> 1);
    printf("%d\n", i >> (1 & i));
    printf("%d\n", (b ^ (i & b)) | b); // entsprechend der vorrangregeln geklammert

    getRgb(rgb(169, 80, 255));
}

int rgb(int r, int g, int b){
    int color = 0;
    color = color | r;
    color = color | (g << 8);
    color = color | (b << 16);
    return color;
}

void getRgb(int color){
    int mask = 0xff;
    int r = color & mask;
    int g = (color >> 8) & mask;
    int b = (color >> 16) & mask;
    printf("R: %d, G: %d, B: %d\n", r, g, b);
}
