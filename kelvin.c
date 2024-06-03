#include <stdio.h>

int main()
{
       int celcius,end_value,counter;
       float kelvin;

       celcius = 0;
       counter = 20;
       end_value = 200;

       while(celcius <= end_value){
            kelvin = celcius + 273.15;
            printf("%d\t%.2f\n",celcius, kelvin);
            celcius = celcius + counter;
       }
        
        return 0;
}
