#include<stdio.h>

int main(void)
{
    int a,b,c ;

    printf("enter 3 numbers\n");
    printf("number1:");
    scanf("%d" , &a);

    printf("number2:");
    scanf("%d" , &b);

    printf("number3:");
    scanf("%d" , &c);


    if(a > b && a > c){
        printf("largest of 3 numbers %d\n" , a); 
    }
    else if(b > a && b > c){
        printf("largest of 3 numbers %d\n" , b); 
    }
    else if(c > a && c > b){
        printf("largest of 3 numbers %d\n" , c);
    }
    else if (a = b = c){
        printf("numbers are equal\n");
    }
    return 0;

}
