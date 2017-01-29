#include <stdio.h>

double quad(double a, double x);
void ersterStreich(void);

double eps = 0.000001;

int main(int argc, char *argv[]){
    //ersterStreich();
    double x;
    if(argc > 1){
        sscanf(argv[1], "%lf", &x);
        double a = (1+x)/2.0;
        printf("Die Wurzel ist: %lf\n", quad(a, x));
    }else{
        ersterStreich();
    }
}

void ersterStreich(void){
    double x;
    scanf("%lf", &x);
    double a = (1+x)/2.0;
    printf("Die Wurzel ist: %lf\n", quad(a, x));
}

double quad(double a, double x){
    double t = a;
    a = (a + (x/a))/2;
    if((t-a) < eps){
        return a;
    }else{
        return quad(a,x);
    }
}
