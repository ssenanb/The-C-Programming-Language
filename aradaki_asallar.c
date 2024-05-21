#include<stdio.h>
#include <stdbool.h>

bool asal(int asal){
    if( asal <= 1) return false;
    for(int i = 2; i * i <= asal; i++){
        if(asal % i == 0) return false;
        }
        return true;
    }

int main()
{
    int sayı1,sayı2,i;
    printf("iki sayı girin: ");
    scanf("%d %d",&sayı1,&sayı2);

    printf("%d ile %d arasındaki asal sayılar\n",sayı1,sayı2);

    for(sayı1; sayı1 <= sayı2; sayı1++){
        if( asal (sayı1) ){
            printf("%d ",sayı1);
        }
    }

    printf("\n");
    return 0;
}