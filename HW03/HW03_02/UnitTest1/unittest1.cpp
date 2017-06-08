#include <stdexcept>
#include "stdafx.h"
#include "CppUnitTest.h"
#include "Readint.h"
#include <fstream>
#include <iostream>
using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(READINT_TEST) // Test suite for read_int()
{
	TEST_METHOD(NegativeAndPositiveWithCorrectRange)
	{
		Assert::AreSame(read_int("My promtp: ", -3, 3), 0);
	}
	TEST_METHOD(LowIsHigherThanHigh)
	{
		Assert::AreSame(read_int("My promtp: ", 5, 1), 0);
	}
	TEST_METHOD(ZeroAndPositiveWithCorrectRange)
	{
		Assert::AreSame(read_int("My promtp: ", -3, 3), 3);
	}
	TEST_METHOD(InputsAreTheSame)
	{
		Assert::AreSame(read_int("My promtp: ", 0, 0), 0);
	}



	TEST_METHOD(TestCase2) // Test case 2: for invalid argument
	{
		// define a C++11 Lambda function to be called by your test
		auto func = []() {
			// call with incorrect arguments (test case 2)
			read_int("My prompt: ", 5, 1);
		};

		// We expect an invalid_argument exception to be thrown when we call func!
		Assert::ExpectException<std::invalid_argument>(func);
	}



	TEST_METHOD(TestCase1) // Test case 1: invalid input
	{
		// Open a file stream to read the file zeroinput.txt (remember CS-172)
		// Replace "UnitTester" with the name of your Native Unit Test project
		ifstream ss("..\\UnitTester\\zeroinput.txt");

		// Check if we opened the file stream successfully
		if (ss.fail())
			throw int(-1); // throw an integer with value -1

						   // Replace the cin read buffer with the read buffer from the file stream 
		streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

		// Perform the read_int() test.
		// cin will now read from your file and not from the keyboard.
		// We expect the correct value returned is 0, ignoring the Hello string.
		Assert::AreEqual(read_int("My prompt: ", -3, 3), 0);

		// Restore cin to the way it was before
		cin.rdbuf(orig_cin);

		// Close the file stream
		ss.close();
	}
};