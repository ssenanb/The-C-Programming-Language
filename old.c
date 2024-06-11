#include<stdio.h>
#include<time.h>

struct myBirthday{
    int day;
    int month;
    int year;
};

int main(){
    time_t date;
    time(&date);
    struct tm *today = localtime(&date);

    struct myBirthday birthday;
    printf("enter your date of birthday: ");
    scanf("%d %d %d",&birthday.day,&birthday.month,&birthday.year);
 
     today->tm_mon += 1;
     today->tm_year += 1900;

    if(birthday.day > today->tm_mday){
        today->tm_mday += 30;
        today->tm_mon --;
    }

    if(birthday.month > today->tm_mon){
        today->tm_mon += 12;
        today->tm_year --;
    }

    printf("%d day, %d month, %d year\n",today->tm_mday - birthday.day,today->tm_mon - birthday.month,today->tm_year - birthday.year);
    return 0;
}
