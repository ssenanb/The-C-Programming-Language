#include<stdio.h>
    

int main()
{
    int sayı, x = 1;

    printf("faktöriyelini hesaplayacağınız sayıyı girin: ");
    scanf("%d", &sayı);

    for( int i = 1 ; i <= sayı ; i++ )     
    {
        x *= i;
    }          
    printf("%d! = %d\n", sayı,x);
    return 0;
}