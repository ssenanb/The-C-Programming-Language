#include <stdio.h>

int main()
{
    int alt_sınır;
    int üst_sınır;
    int i;

    printf("alt sınırı giriniz:" );
    scanf("%d", &alt_sınır);
    printf("üst sınırı giriniz:");
    scanf("%d", &üst_sınır);

    for(i = alt_sınır; i<= üst_sınır; i++){
        printf("%d ",i);
    }
        printf("\nBu kadar!\n");
        return 0;
}

