// C++ Learning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Tutorial learnt from: (Youtube) https://www.youtube.com/watch?v=vLnPwxZdW4Y
// Author: Alex Ang
// Year: 2021

#include <iostream>
#include <string>   // need to include this to use string without interruption
#include <cmath>

using namespace std;

void variableAndDataType()
{
	string myName = "Alexander";
	int myAge;
	myAge = 100;

	cout << "Hello World and Hello " << myName << endl;
	cout << "I am " << myAge << " years old." << endl;
}

void stringFunction()
{
	string myName = "Alexander";

	cout << "Length of my name: " << myName.length() << endl;
	cout << "Where X located from index 0: " << myName.find("x", 0) << endl;
	cout << "Substring start from index 2: " << myName.substr(2, 2) << endl;
}

void basicCMathFunction()
{
	cout << pow(2, 2) << endl;
	cout << sqrt(36) << endl;
	cout << round(4.5) << endl;	// normal rounding rule
	cout << ceil(4.1) << endl;	// rounded to the highest number after the current one
	cout << floor(5.9) << endl; // rounded to the lowest number before the current one
	cout << fmax(2, 10) << endl;
	cout << fmin(2, 10) << endl;
}

void userInput()
{
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
}

void SimpleArray()
{
	int luckyNo[] = { 1,2,3,4,5 };

	string stringList[10];

	stringList[0] = "aSDasdad";

	cout << stringList[0];
}

// C++ functions must be above main unless function prototyping is used where function name with type and parameter/s is declared above main function

void simpleFunction(string name);
double cube(double num);
void ifStatement(bool gay, bool happy, bool crazy);
void switchCase(int numberToDayOfWeek);
void whileLoop();
void doWhileLoop();
void guessANumber();
void forLoop();

int main()
{
	forLoop();

	return 0;
}

void simpleFunction(string name = "")
{
	cout << "Yo! " << name << endl;
}

double cube(double num)
{
	return pow(num, 3);
}

void ifStatement(bool gay, bool happy, bool crazy)
{
	bool isGay = gay;
	bool isHappy = happy;
	bool isCrazy = crazy;

	if (isGay && isHappy)
	{
		cout << "Yo good man";
	}
	else if (isCrazy)
	{
		cout << "Ya crazy man";
	}
	else
	{
		cout << "Nothing Happen" << endl;
	}
}

void switchCase(int numberToDayOfWeek)
{
	string dayOfWeek;

	switch (numberToDayOfWeek)
	{
		case 0:
			dayOfWeek = "Sunday";
			break;
		case 1:
			dayOfWeek = "Monday";
			break;
		case 2:
			dayOfWeek = "Tuesday";
			break;
		case 3:
			dayOfWeek = "Wednesday";
			break;
		case 4:
			dayOfWeek = "Thursday";
			break;
		case 5:
			dayOfWeek = "Friday";
			break;
		case 6:
			dayOfWeek = "Saturday";
			break;
		default:
			dayOfWeek = "Invalid Day";
			break;
	}

	cout << dayOfWeek << endl;
}

void whileLoop()
{
	int index = 0;

	while (index <= 10) {
		cout << "Index: " << index << endl;
		index++;
	}
}

void doWhileLoop()
{
	int index = 0;

	do {
		cout << "Index: " << index << endl;
		index++;
	} while (index <= 0);
}

void guessANumber()
{
	int guessedNumber = 0;
	int guessedCount = 0;
	int answer = 10;
	int guessChances = 2;
	bool outOfGuess = false;

	while (answer != guessedNumber && !outOfGuess) {
		if (guessedCount < guessChances) {
			cout << "Please guess a right number between 1 to 10: \n";
			cin >> guessedNumber;
			guessedCount++;
		}
		else if (guessedCount >= guessChances)
		{
			outOfGuess = true;
		}
	}

	if (guessedNumber == answer && !outOfGuess) {
		cout << "You Win!" << endl;
	}
	else {
		cout << "You Lost!" << endl;
	}
}

void forLoop()
{

}
