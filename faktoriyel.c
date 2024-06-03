#include<stdio.h>
    

int main()
{
    int number, x = 1;

    printf("Enter the number whose factorial will be calculated: ");
    scanf("%d", &number);

    for( int i = 1 ; i <= number ; i++ )     
    {
        x *= i;
    }          
    printf("%d! = %d\n", number,x);
    return 0;
}
