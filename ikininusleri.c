#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    double a;
    

    printf("n\t2^n\n");
    printf("---------------\n");

    for(n = 0; n <=10; n++){
        a = pow(2,n);
        printf("%d\t%.f\n",n,a);
    }
    return 0;
}