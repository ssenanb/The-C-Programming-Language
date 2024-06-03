#include<stdio.h>

int main()
{
   int n;
   int sum = 0;
   int counter = 1;

   printf("enter the number of students:");
   scanf("%d",&n);

   int point[n];

   for(int i = 0; i < n; i++)
   {
        printf("%d.student's grade: ",counter++);
        scanf("%d",&point[i]);
        sum += point[i];
   }
    
    printf("total of students' grades:%d\n",sum );
    printf("students' grade point average: %d\n",sum / n);
   
    return 0;
}
