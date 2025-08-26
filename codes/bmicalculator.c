#include <stdio.h>

void main() {

    float weight,height,BMI;

    printf("Weight in Kgs:");
    scanf("%f", &weight);

    printf("Height in metres:");
    scanf("%f", &height);

    BMI=(weight/(height*height));

    if (BMI < 15)
        printf("\nStarvation");
    
    else if ( BMI >= 15 && BMI <= 17.5 )
        printf("\nAnorexic");
    
    else if ( BMI >= 17.6 && BMI <= 18.5) 
        printf("\nUnderweight");
    
    else if (BMI >= 18.5 && BMI <= 24.9) 
        printf("\nIdeal");
    
    else if (BMI >= 24.9 && BMI <= 29.9) 
        printf("\nOverweight");
    
    else if (BMI >= 30 && BMI <= 39.9) 
        printf("\nObese");

     else if (40<=BMI)
        printf("\nMorbidity Obese");
    

    printf("\nBMI=%f", BMI);

}
