#include<stdio.h>
#include<time.h>

int main()
{
    time_t start,finish;
    printf("press enter to start stopwatch.");
    getchar();
    time(&start);
    printf("press enter to finish stopwatch.");
    getchar();
    time(&finish);
    printf("the passing time: %.2f second.\n",difftime(finish,start));

}
