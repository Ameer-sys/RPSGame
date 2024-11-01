#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void rpsgame(const char* playerone, const char* playertwo, char* result);

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
			Assert::AreEqual("Player2", result);

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
			Assert::AreEqual("Player1", result);
		}

	};

}
