#include <stdio.h>

int main()
{
    int sayı;
    printf("bir sayı girin: ");
    scanf("%d",&sayı);

    printf("doğal sayılar\n");
    for(int i = 1; i <= sayı;i++){
        printf("%d ",i);
    }

    printf("\nçift sayılar\n");
    for(int j = 0; j <= sayı; j += 2){
        printf("%d ",j);
    }

    printf("\ntek sayılar\n");
    for(int k = 1; k <= sayı; k += 2 ){
        printf("%d ",k);
    }

    return 0;
}