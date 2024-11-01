#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void rpsgame(const char* playerone, const char* playertwo, char* result);

void rpsgame(const char* playerone, const char* playertwo, char* result) {
	char p1[20];

	char p2[20];

	strncpy(p1, playerone, sizeof(p1) - 1);

	strncpy(p2, playertwo, sizeof(p2) - 1);

	

	

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
			Assert::AreEqual("Playerone", result);


		}

		TEST_METHOD(WhenPlayerTwoWins)
		{
			char result[20];
			rpsgame("Scissors", "Rock", result);
			Assert::AreEqual("Playertwo", result);

		}
		TEST_METHOD(WhenThereisADraw)
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

		TEST_METHOD(CaseInsensitivity)
		{
			char result[20];
			rpsgame("Rock", "Scissors", result);
			Assert::AreEqual("Playerone", result);
		}

	};

}
