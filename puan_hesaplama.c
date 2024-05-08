#include<stdio.h>

int main()
{
   int n;
   int toplam = 0;
   int sayaç = 1;

   printf("öğrenci sayısını girin:");
   scanf("%d",&n);

   int puan[n];

   for(int i = 0; i < n; i++)
   {
        printf("%d.öğrencinin notu: ",sayaç++);
        scanf("%d",&puan[i]);
        toplam += puan[i];
   }
    
    printf("öğrencilerin notlarının toplamı:%d\n",toplam );
    printf("öğrencilerin not ortalaması: %d\n",toplam / n);
   
    return 0;
}