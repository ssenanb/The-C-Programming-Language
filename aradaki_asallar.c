#include<stdio.h>
#include <stdbool.h>

bool prime(int prime){
    if( prime <= 1) return false;
    for(int i = 2; i * i <= prime; i++){
        if(prime % i == 0) return false;
        }
        return true;
    }

int main()
{
    int number1,number2,i;
    printf("enter two numbers: ");
    scanf("%d %d",&number1,&number2);

    printf("prime numbers between %d and %d\n",number1,number2);

    for(number1; number1 <= number2; number1++){
        if( prime (number1) ){
            printf("%d ",number1);
        }
    }

    printf("\n");
    return 0;
}
