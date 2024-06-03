#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Natural numbers\n");
    for(int i = 1; i <= number; i++){
        printf("%d ", i);
    }

    printf("\nEven numbers\n");
    for(int j = 0; j <= number; j += 2){
        printf("%d ", j);
    }

    printf("\nOdd numbers\n");
    for(int k = 1; k <= number; k += 2){
        printf("%d ", k);
    }

    return 0;
}
