#include<stdio.h>
#include<math.h>
    
void indeks(double boy, int kilo)
{
    int işlem = (kilo/(pow(boy,2))); 
    printf("vücut kütle indeksiniz:%d\n",işlem);
}


int main(void)
{
    float boy;
    int kilo;

    printf("boyunuzu metre cinsinden girin ");
    scanf("%f", &boy);

    printf("kilonuzu girin ");
    scanf("%d", &kilo);

    indeks(boy,kilo);

    return 0;
}