#include <stdio.h>

int main()
{
    int number;
    int s[4];
    int sum = 0;

    printf("Enter 4 digit number: ");
    scanf("%d",&number);

    for(int i = 3; i >= 0;i--){
        s[i] = number % 10;
        number /= 10;
    }

    for(int i = 0; i < 4; i++){
        sum += s[i];
    }

    printf("digit sum:%d\n",sum);
    return 0; 
 }
