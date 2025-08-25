#include <stdio.h>
#include <string.h>

int main() {
    int votes1 = 0, votes2 = 0, noResult = 0, totalVotes;
    char option1[100], option2[100];
    char votersChoice[100];

    // Ask for the two options to vote on
    printf("Enter the first option: ");
    scanf("%s", option1);

    printf("Enter the second option: ");
    scanf("%s", option2);

    // Ask how many votes
    printf("How many votes do you want?\n");
    scanf("%d", &totalVotes);

    // Voting loop
    for (int i = 0; i < totalVotes; i++) {
        printf("What do you want to vote for (%s or %s)? ", option1, option2);
        scanf("%s", votersChoice);

        if (strcmp(votersChoice, option1) == 0) {
            votes1++;
        } else if (strcmp(votersChoice, option2) == 0) {
            votes2++;
        } else {
            noResult++;
        }
    }

    // Show results
    printf("\nVoting Results:\n");
    printf("%s: %d votes\n", option1, votes1);
    printf("%s: %d votes\n", option2, votes2);
    printf("Invalid votes: %d\n", noResult);

    return 0;
}
