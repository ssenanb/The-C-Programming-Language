#include<stdio.h>
#include<math.h>

float environment(float r)
{
    float pi = 3.14;
    float environment_result = 2*pi*r;
    return environment_result;
}

float area(float r)
{
    float pi = 3.14;
    double area_result = pi*pow(r,2);
    return area_result; 
}

int main()
{
    float r;

    printf("enter a radius: ");
    scanf("%f",&r);

    printf("environment: %.2f\t area: %.2f\n",environment(r),area(r));
    return 0;
}
