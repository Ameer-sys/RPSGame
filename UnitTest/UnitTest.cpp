
#include "pch.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void rpsgame(const char* playerone, const char* playertwo, char* result);

void rpsgame(const char* playerone, const char* playertwo, char* result) {

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


namespace UnitTest
{
	TEST_CLASS(TestForRockPapperScissors)

	{
	public:
        TEST_METHOD(WhenPlayerOneWins)
        {
            char result[20];
            rpsgame("Rock", "Scissors", result);
            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(WhenPlayerTwoWins)
        {
            char result[20];
            rpsgame("Scissors", "Rock", result);
            Assert::AreEqual("Player2", result);
        }

        TEST_METHOD(WhenThereIsADraw)
        {
            char result[20];
            rpsgame("Paper", "Paper", result);
            Assert::AreEqual("Draw", result);
        }

        TEST_METHOD(WhenWithInvalidInput)
        {
            char result[20];
            rpsgame("Rock", "InvalidInput", result);
            Assert::AreEqual("Invalid", result);
        }

        TEST_METHOD(ValidInputsCaseSensitive)
        {
            char result[20];
            rpsgame("rock", "SCISSORS", result);
            Assert::AreEqual("Invalid", result); 
        }
    };
}
