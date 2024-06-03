#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int guess,system,remainder = 3;

    srand(time(NULL));  
    system = rand() % 100 + 1; 
    printf("I chose a number between 1 and 100. You have 3 guesses..\n");

    for(int i = 0; i < remainder;i++){
        printf("What is your guess, you have %d chances left\n",remainder - i);
        scanf("%d",&guess);
    
    if(guess < system){
        printf("try a larger number\n");
    }else if(guess > system){
        printf("try a smaller number\n");
    }else{
        printf("you guessed right!");
    }
    }
    
    printf("You're out of guesses. The number I chose would be %d.\n",system);

    return 0;
}
