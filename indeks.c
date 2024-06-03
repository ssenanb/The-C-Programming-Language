#include<stdio.h>
#include<math.h>
    
void indeks(double height, int weight)
{
    int result = (height/(pow(height,2))); 
    printf("your body mass index:%d\n",result);
}


int main(void)
{
    float height;
    int weight;

    printf("enter your height in meters ");
    scanf("%f", &height);

    printf("enter your weight ");
    scanf("%d", &weight);

    indeks(height,weight);

    return 0;
}
