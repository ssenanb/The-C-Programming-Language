#include<stdio.h>
#include<math.h>

float çevre(float r)
{
    float pi = 3.14;
    float çevre_sonuç = 2*pi*r;
    return çevre_sonuç;
}

float alan(float r)
{
    float pi = 3.14;
    double alan_sonuç = pi*pow(r,2);
    return alan_sonuç; 
}

int main()
{
    float r;

    printf("yarıçapı girin: ");
    scanf("%f",&r);

    printf("çevre: %.2f\t alan: %.2f\n",çevre(r),alan(r));
    return 0;
}