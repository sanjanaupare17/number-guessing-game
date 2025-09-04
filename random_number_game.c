#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX
    int randomNumber = rand();
    //printf("Guess your number %d\n", randomNumber);

    // Example: random number between 1 and 100
    int randomBetween1And100 = (rand() % 100) + 1;
   // printf("Random number between 1 and 100: %d\n", randomBetween1And100); //dont show the number
    
    int guess;
    int i=0;
    
    do {
    	printf("guess the number: \n");
	    scanf("%d",&guess);
	if (guess < randomBetween1And100)
	{
		printf("Uh oh, try a larger number!\n");
		}	
		
	else if (guess > randomBetween1And100)
	{
		printf("Uh oh, try a smaller number!\n");
	}
    	
    	else
    	{
    		printf ("CONGRATS! You guessed it right\n");
		}
		
		i++;
	} while (guess != randomBetween1And100);
	
	printf("You guess it in %d attempts", i);

    return 0;
}

