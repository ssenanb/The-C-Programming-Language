#include <stdio.h>

int main()
{
    int lower_limit;
    int upper_limit;
    int i;

    printf("Enter the lower limit:" );
    scanf("%d", &lower_limit);
    printf("Enter the upper limit:");
    scanf("%d", &upper_limit);

    for(i = lower_limit; i <= upper_limit; i++){
        printf("%d ", i);
    }
    printf("\nThat's it!\n");
    return 0;
}
