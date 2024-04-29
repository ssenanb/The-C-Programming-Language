#include<stdio.h>

int main(void)
{
    int a,b,c ;

    printf("3 adet sayı girin\n");
    printf("sayı1:");
    scanf("%d" , &a);

    printf("sayı2:");
    scanf("%d" , &b);

    printf("sayı3:");
    scanf("%d" , &c);


    if(a > b && a > c){
        printf("üç sayıdan en büyüğü %d\n" , a); 
    }
    else if(b > a && b > c){
        printf("üç sayıdan en büyüğü %d\n" , b); 
    }
    else if(c > a && c > b){
        printf("üç sayıdan en büyüğü %d\n" , c);
    }
    else if (a = b = c){
        printf("sayılar birbirine eşit\n");
    }
    return 0;

}