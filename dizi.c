#include<stdio.h>
 
int main(void)
{
     int numbers[10];
     int squares[10];
     int i,j;

     for(i = 1; i <= 10; i++)
     {
        numbers[i] = i;
        squares[i] = i*i;
     }
     for(j = 1; j <= 10; j++)
     {
        printf("%d\n",numbers[j]);
        printf("%d\n\n",squares[j]);
     }
    return 0 ;

}
