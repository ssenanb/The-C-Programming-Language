#include<stdio.h>
#include<time.h>

int main()
{
    time_t başlangıç,bitiş;
    printf("kronometreyi başlatmak için enter tuşuna basın.");
    getchar();
    time(&başlangıç);
    printf("kronometreyi durdurmak için enter tuşuna basın.");
    getchar();
    time(&bitiş);
    printf("geçen süre: %.2f saniye.\n",difftime(bitiş,başlangıç));

}