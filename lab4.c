#include <stdio.h>
#include <math.h>

int lab4(int argc, const char * argv[]) {
    
    double l;
    double w;
    printf("length \n");
    scanf("%lf",&l);
    printf("width \n");
    scanf("%lf",&w);
    
    double area = l * w;
    double perimeter = 2*l + 2*w;
    
    printf("the area of a rectangle with a length of %lf and a width of %lf is %lf \n", l, w, area);
    printf("the perimeter of a rectangle with a length of %lf and a width of %lf is %lf \n", l, w, perimeter);
    
    return 0;
}
