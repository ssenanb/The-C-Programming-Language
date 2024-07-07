#include<stdio.h>
#include<math.h>
    
float indeks(float height, float weight)
{
    float result = (height/(pow(height,2))); 
    printf("your body mass index:%.1f\n",result);
    return result;
}


int main(void)
{
    float height;
    int weight;
    float result;

    printf("enter your height in meters ");
    scanf("%f", &height);

    printf("enter your weight ");
    scanf("%f", &weight);

    result = indeks(height,weight);

    if(result < 18.5){
        printf("you are weak\n");
    }
    else if(result >= 18.5 && result < 24.9){
        printf("you are normal\n");
     }
     else if(result >= 25 && result < 29.9){
        printf("you are overweight\n");
     }
     else if( result >= 30){
        printf("you are obesity\n");
    }
    
    return 0;
}
