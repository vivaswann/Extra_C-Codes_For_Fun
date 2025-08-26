#include <stdio.h>

void main() {
    float length1, length2, length3, breadth1, breadth2, breadth3, Perimetre, p1, p2, p3;

    printf("Length of rectangle1: ");
    scanf("%f", &length1);
    printf("Breadth of rectangle1: ");
    scanf("%f", &breadth1);

    printf("\nLength of rectangle2: ");
    scanf("%f", &length2);
    printf("Breadth of rectangle2: ");
    scanf("%f", &breadth2);

    printf("\nLength of rectangle3: ");
    scanf("%f", &length3);
    printf("Breadth of rectangle3: ");
    scanf("%f", &breadth3);

     p1 = 2 * (length1 + breadth1);
     p2 = 2 * (length2 + breadth2);
     p3 = 2 * (length3 + breadth3);

    if (p1 >= p2 && p1 >= p3) {
        Perimetre = p1;
        printf("\nLargest Perimeter is of rectangle1 = %.f", Perimetre);
    }

    else if (p2 >= p1 && p2 >= p3){
        Perimetre = p2;
        printf("\nLargest Perimeter is of rectangle2 = %.f", Perimetre);
    }
    else {
        Perimetre = p3;
        printf("\nLargest Perimeter is of rectangle3 = %.f", Perimetre);
    }

}
