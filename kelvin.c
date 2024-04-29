#include <stdio.h>

int main()
{
       int celsius,son_değer,sayaç;
       float kelvin;

       celsius = 0;
       sayaç = 20;
       son_değer = 200;

       while(celsius <= son_değer){
            kelvin = celsius + 273.15;
            printf("%d\t%.2f\n",celsius, kelvin);
            celsius = celsius + sayaç;
       }
        
        return 0;
}
