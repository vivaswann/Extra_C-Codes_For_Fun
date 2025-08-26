#include <stdio.h>
void main() {

    int x1,x2,x3,y1,y2,y3;
    float Slope1,Slope2, Area;

    printf("x1 y1:");
    scanf("%d %d", &x1, &y1);

    printf("x2 y2:");
    scanf("%d %d", &x2, &y2);

    printf("x3 y3:");
    scanf("%d %d", &x3, &y3);

    Slope1=(y2-y1)/(x2-x1);
    Slope2=(y3-y2)/(x3-x2);
    Area= 0.5*(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));

    if ((Slope1==Slope2) && (Area==0)) {
       printf ("The three points are collinear");
    }

    else if ((Slope1!=Slope2) && (Area!=0)) {
        printf("The three points are not collinear");
    }

    printf("\nSlope1= %f\n", Slope1);
    printf("Slope2=%f\n", Slope2);
    printf("Area=%f", Area);
    
}