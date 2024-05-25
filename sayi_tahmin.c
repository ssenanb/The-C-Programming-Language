#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int tahmin,bilgisayar,hak = 3;

    srand(time(NULL));  
    bilgisayar = rand() % 100 + 1; 
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
