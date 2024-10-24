#include<stdio.h>

int main()
{
    int N,mid,choice;
    // Prompt user to enter the size of the number range N
    printf("Enter the size of N(must be greater 1) :");
    scanf("%d",&N);

    // Display the game rules to the user
    printf("Game Rules:\n");
    printf("choose (1) if the hidden number is greater than the guess\n");
    printf("choose (2) if the hidden number is less than the guess\n");
    printf("choose (3) if the hidden number is equal to the guess\n");
    // Initialize the low and high bounds for binary search
    int low = 1;
    int high = N;

    // Start binary search process to guess the hidden number
    while(low <= high)
    {
        // Calculate the mid-point between low and high
        mid = low + (high-low)/2;

        // Ask the user if the hidden number is greater, less, or equal to the current guess (mid)
        printf("Is your hidden number is greater than, less than, or equal to %d?",mid);
        printf("\nSumbit your answer : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            // Hidden number is greater, adjust the low bound
            low = mid+1;
        }
        else if(choice == 2)
        {
            // Hidden number is smaller, adjust the high bound
            high = mid - 1;
        }
        else if(choice == 3)
        {
            // Correct guess, print success message and exit
            printf("Yahoo! I guessed your hidden number correctly your number is %d\n",mid);
            return 0;
        }

        else
        {
            // Invalid input, show error message
            printf("Opps! Wrong input please read game rules again\n");
        }

    }
    // If the number is not found
    printf("Ahh! I'm sorry, I couldn't guess your hidden number.\nI think you give me wrong details user!");
}
