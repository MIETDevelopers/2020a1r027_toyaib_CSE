#include <stdio.h>
float add(float a, float b);
float sub(float a, float b);
float multi(float a, float b);
float div(float a, float b);

int main()
{
    char Operator;
    float num1, num2, result = 0;
    
    printf("\n Please Enter an Operator (+, -, *, /)  :  ");
    scanf("%c", &Operator);
    
    printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
    scanf("%f%f", &num1, &num2);
    
    switch(Operator)
    {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = sub(num1, num2);
            break;              
        case '*':
            result = multi(num1, num2);
            break;
        case '/':
            result = div(num1, num2);
            break;
        default:
            printf("\n Wrong choice entered ");                              
    }
  
    printf("\n The result of %.2f %c %.2f  = %.2f", num1, Operator, num2, result);
    
    return 0;
}
float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float multi(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    return a / b;
}