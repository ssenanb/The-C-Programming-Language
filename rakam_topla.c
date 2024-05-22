#include <stdio.h>

int main()
{
    int sayı;
    int s[4];
    int toplam = 0;

    printf("4 basamaklı bir sayı girin: ");
    scanf("%d",&sayı);

    for(int i = 3; i >= 0;i--){
        s[i] = sayı % 10;
        sayı /= 10;
    }

    for(int i = 0; i < 4; i++){
        toplam += s[i];
    }

    printf("rakamlar toplamı:%d\n",toplam);
    return 0; 
 }