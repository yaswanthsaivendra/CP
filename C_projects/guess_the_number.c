// Guess the number game ==>>> guess the number between 1 to 100.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess,nguesses=1;
    srand(time(NULL));
    num = rand() % 100 + 1; //Generates a random number between 1 and 100.
    //run a loop until the number is guessed.
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>num){
            printf("Enter a lower number\n");
        }
        else if (guess<num)
        {
            printf("Enter a higher number\n");   
        }
        else if (guess==num)
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        else
        {
            printf("Please Ensure that you Entered a number between 1 to 100.\n");
        }
        nguesses++;
    } while (guess!=num);
    
    return 0;
}