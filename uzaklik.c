#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    int x1, y1;
    int h1;
    float h2;

    printf("Line equation: ax + by + c = 0\n");
    printf("Enter the coefficients of the line in order: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Point: P(x1, y1)\n");
    printf("Enter the coordinates of the point to calculate the distance: ");
    scanf("%d %d", &x1, &y1);

    h1 = abs((a * x1) + (b * y1) + c);
    h2 = sqrt(pow(a, 2) + pow(b, 2));

    printf("Result: %.2f\n", h1 / h2);

    return 0;
}
