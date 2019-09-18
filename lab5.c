#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double f, c, fact, n;
    
    
    printf("temp in f\n");
    scanf("%lf", &f);
    
    fact= f-32;
    c = ((5*fact)/9);
    printf("%lf degrees c \n", c);
    n = fabs(c);
    
    if (c < 0) {
        printf("it is %lf degrees below freezing point",n);
    }
    
    else if (c > 0) {
        printf("it is %lf above freezing point", n);
    }
    else{
        
        printf("It is at freezing temperature");
        
    }
    return 0;
}
