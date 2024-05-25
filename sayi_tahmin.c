#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int tahmin,bilgisayar,hak = 3;

    srand(time(NULL));  //tohumlama(seeding)
    // srand(),rand() fonksiyonunun başlangıç değerini(tohum) ayarlar.
    //time(NULL) ifadesi her saniye değiştiğinde değeri değiştirmek için kullanılır.--> 1 sn yerine 2 sn sonra tahminde bulunursam başangıçtaki tutulan sayı değişir mi?
    bilgisayar = rand() % 100 + 1;  //1 ile 100 arasında sayı tuttuğunu göstermek için.

    printf("1 ile 100 arasında bir sayı tuttum.3 tahmin hakkın var.\n");

    for(int i = 0; i < hak;i++){
        printf("tahminin nedir,%d hakkın kaldı\n",hak - i);
        scanf("%d",&tahmin);
    
    if(tahmin < bilgisayar){
        printf("daha büyük bir sayı deneyin\n");
    }else if(tahmin > bilgisayar){
        printf("daha küçük bir sayı deneyin\n");
    }else{
        printf("doğru tahmin ettin!");
    }
    }
    
    printf("tahmin hakkın bitti.tuttuğum sayı %d olacaktı.\n",bilgisayar);

    return 0;
}