#include<stdio.h>
 
int main(void)
{
     int sayılar[10];
     int kareler[10];
     int i,j;

     for(i = 1; i <= 10; i++)
     {
        sayılar[i] = i;
        kareler[i] = i*i;
     }
     for(j = 1; j <= 10; j++)
     {
        printf("%d\n",sayılar[j]);
        printf("%d\n\n",kareler[j]);
     }

    

    return 0 ;

}