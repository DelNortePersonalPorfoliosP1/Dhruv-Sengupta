#include <stdio.h>
#include <math.h>

int lab1() {
    
    double side1;
    double side2;
    
    printf("side1");
    scanf("%lf",&side1);
    printf("side2");
    scanf("%lf",&side2);
    double side3 = sqrt(side1*side1 + side2*side2);
    printf ("the hypotenuse is %lf",side3);
    
    return 0;
    
    //testing 123
}
