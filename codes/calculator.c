#include <stdio.h>

int main()
{
    float num1;
    float num2;
    char operator;
    float Answer;

    printf("first num:");
    scanf("%f", &num1);

    printf("second num:");
    scanf("%f", &num2);

    printf("operator");
    scanf(" %c", &operator:);

    if (operator == '+')
    {
        Answer = num1 + num2;
        printf("Answer=%f", Answer);
    }

    else if (operator == '-')
    {
        Answer = num1 - num2;
        printf("Answer=%f", Answer);
    }

    else if (operator == '*')
    {
        Answer = num1 * num2;
        printf("Answer=%f", Answer);
    }

    else if (operator == '/')
    {
        if (num2==0)
        printf("Invalid Input");

        Answer = num1 / num2;
        printf("Answer=%f", Answer); 

        
    }

    else
    {
        printf("Invalid Input");
    }

    return 0;                             
}
