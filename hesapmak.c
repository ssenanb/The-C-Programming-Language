#include<stdio.h>
#include<math.h>

void addition(int a, int b)
{
    int sum = a + b;
    printf("%d\n", sum);
}

void subtraction(int a, int b)
{
    int subtract = a - b;
    printf("%d\n", subtract);
}

void division(int a, int b)
{
    int divide = a / b;
    printf("%d\n", divide);
}

void multiplication(int a, int b)
{
    int multiply = a * b;
    printf("%d\n", multiply);
}

void modulus(int a, int b)
{
    int mod = a % b;
    printf("%d\n", mod);
}

void exponentiation(double a, double b)
{
    double result = pow(a, b);
    printf("%.2f\n", result); 
}

void squareRoot(float a)
{
    printf("%.2f\n", sqrt(a));
}

int main()
{
    
    char operation;
    int a, b;

    printf("Select the operation (+,-,*,/,x,!,#)\nOperation: ");
    // ! is for modulus, # is for square root, x is for exponentiation.
    scanf(" %c", &operation);

   
      if (operation == '+'){
        printf("Enter the numbers: ");
        scanf("%d %d", &a, &b);
        addition(a, b);
    
      } else if(operation == '-'){
        printf("Enter the numbers: ");
        scanf("%d %d", &a, &b);
        subtraction(a, b);
        
      } else if(operation == '/'){
        printf("Enter the numbers: ");
        scanf("%d %d", &a, &b);
        division(a, b);
        
      } else if(operation == '*'){
        printf("Enter the numbers: ");
        scanf("%d %d", &a, &b);
        multiplication(a, b);
        
      } else if(operation == 'x'){
        printf("Enter the numbers: ");
        scanf("%d %d", &a, &b);
        exponentiation(a, b);
        
      } else if(operation == '#'){
        printf("Enter the number: ");
        scanf("%d", &a);
        squareRoot(a);
        
      } else if(operation == '!'){
        printf("Enter the numbers: ");
        scanf("%d %d", &a, &b);
        modulus(a, b);
      }
    
    return 0;
}
