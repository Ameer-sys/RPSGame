
#include <string.h>
#include "rps.h"


//function implementation
void rpsgame(const char* playerone, const char* playertwo, char* result) 
{

    int validPlayer1 = (strcmp(playerone, "Rock") == 0 || strcmp(playerone, "Paper") == 0 || strcmp(playerone, "Scissors") == 0);
    int validPlayer2 = (strcmp(playertwo, "Rock") == 0 || strcmp(playertwo, "Paper") == 0 || strcmp(playertwo, "Scissors") == 0);

    if (!validPlayer1 || !validPlayer2) {
        strcpy(result, "Invalid");
        return;
    }

    if (strcmp(playerone, playertwo) == 0) {
        strcpy(result, "Draw");
    }

    else if ((strcmp(playerone, "Rock") == 0 && strcmp(playertwo, "Scissors") == 0) ||
        (strcmp(playerone, "Scissors") == 0 && strcmp(playertwo, "Paper") == 0) ||
        (strcmp(playerone, "Paper") == 0 && strcmp(playertwo, "Rock") == 0)) {
        strcpy(result, "Player1");
    }

    else {
        strcpy(result, "Player2");
    }
}