#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int user, computer;

    printf("WELCOME TO ROCK, PAPER, SCISSORS\n");
    printf("1. ROCK\n");
    printf("2. PAPER\n");
    printf("3. SCISSORS\n");

    printf("\nYour Turn (1-3): ");
    scanf("%d", &user);

    computer = rand() % 3 + 1;  // random number between 1 and 3
    printf("Computer chose: %d\n", computer);

    switch(user) {
        case 1: // user = Rock
            if (computer == 1) printf("😐 It's a draw!\n");
            else if (computer == 2) printf("💻 Computer wins! (Paper covers Rock)\n");
            else printf("🎉 You win! (Rock smashes Scissors)\n");
            break;

        case 2: // user = Paper
            if (computer == 2) printf("😐 It's a draw!\n");
            else if (computer == 3) printf("💻 Computer wins! (Scissors cut Paper)\n");
            else printf("🎉 You win! (Paper covers Rock)\n");
            break;

        case 3: // user = Scissors
            if (computer == 3) printf("😐 It's a draw!\n");
            else if (computer == 1) printf("💻 Computer wins! (Rock smashes Scissors)\n");
            else printf("🎉 You win! (Scissors cut Paper)\n");
            break;

        default:
            printf("❌ Invalid choice! Pick 1, 2, or 3.\n");
    }

    return 0;
}
