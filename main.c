#include<stdio.h>

int main(){
    int a = 0,b = 0,noResult = 0,totalVotes;
    printf("how many votes do you want?\n");
    scanf("%d",&totalVotes);
    char votersChoice;

    int i = 0;

    while (i < totalVotes){
        printf("who do you want to vote on a or b?\n");
        scanf("c", votersChoice);
        if (votersChoice == 'a'){
            a++;
        } else if (votersChoice == 'b'){
            b++;
        } else {
            noResult++;
        }

        i++;
    }
    printf("\nVoting Results:\n");
    printf("a: %d votes\n", a);
    printf("b: %d votes\n", b);
    printf("Invalid votes: %d\n", noResult);

    return 0;

}