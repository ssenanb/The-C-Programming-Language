#include<stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr[0])))

int main()
{
    
    int a[10] = {0,1};
    int i;
    for(int i = 2; i <ARRAY_SIZE(a); i++ )
            a[i] = a[i - 1] + a[i - 2]; 
    for(int j = 0; j < ARRAY_SIZE(a);j++)
        printf("%d ",a[j]);
    printf("\n");

}