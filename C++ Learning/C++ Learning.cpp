// C++ Learning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>   // need to include this to use string without interruption
#include <cmath>

using namespace std;

int main()
{
	string myName = "Alexander";
	int myAge;
	myAge = 100;

	// variables
    cout << "Hello World and Hello " << myName << endl;
	cout << "I am " << myAge << " years old." << endl;

	// string functionc
	cout << "Length of my name: " << myName.length() << endl;
	cout << "Where X located from index 0: " << myName.find("x", 0) << endl;
	cout << "Substring start from index 2: " << myName.substr(2, 2) << endl;

	// basic cmath function
	cout << pow(2, 2) << endl;
	cout << sqrt(36) << endl;
	cout << round(4.5) << endl;	// normal rounding rule
	cout << ceil(4.1) << endl;	// rounded to the highest number after the current one
	cout << floor(5.9) << endl; // rounded to the lowest number before the current one
	cout << fmax(2, 10) << endl;
	cout << fmin(2, 10) << endl;

	// user input
	string userInput;

	cout << "Enter something in string: \n";
	cin >> userInput; // this gonna take something you input like a number or a character or a string, thing will not be store after a space
	cin.ignore(numeric_limits<streamsize>::max(), '\n');	// ignore long long size of character and terminate upon newline
	cout << "\nSomething you input: " << userInput << "\n" << endl;

	// When you take any input using cin, it stores ‘\n’ in buffer. Since, getline does not ignore leading whitespace, it thinks it has finished
	// reading and stops reading any further. So, this problem arises when getline() is used after cin statement. The problem in your program is that
	// when you input age and press Enter, the Enter is stuck in the input buffer until it encounters another input statement which, you guessed it right,
	// is getline(). In other words, the getline() is not getting ignored by the compiler. It is still getting executed and is reading Enter as input.

	cout << "A line of everything you input: \n";
	getline(cin, userInput);
	cout << "\nSomething you input: " << userInput << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
