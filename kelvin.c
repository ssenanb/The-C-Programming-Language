#include <stdio.h>

int main()
{
       int celsius,son_değer,diğer_sayı;
       float kelvin;

       celsius = 0;
       diğer_sayı = 20;
       son_değer = 200;

       while(celsius <= son_değer){
            kelvin = celsius + 273.15;
            printf("%d\t%.2f\n",celsius, kelvin);
            celsius = celsius + diğer_sayı;
       }
        
        return 0;
}