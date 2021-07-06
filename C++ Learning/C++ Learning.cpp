// C++ Learning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Tutorial learn from: (Youtube) https://www.youtube.com/watch?v=vLnPwxZdW4Y and https://www.youtube.com/watch?v=mUQZ1qmKlLY
// Author: Alex Ang
// Year: 2021

#include <iostream>
#include <string>   // need to include this to use string without interruption
#include <cmath>
#include "Car.h"

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

// class
class Book {

// access modifier
private:
	string title;
	string author;
	int pages;

	void bookCreated() {
		cout << "Book, " << title << " was written by " << author << " with " << pages << " pages." << endl;
	}

public:
		// constructor and overloaded
		Book() {
			title = "";
			author = "";
			pages = 0;
		}

		Book(string aTitle = "", string aAuthor="", int aPages=0) {
			title = aTitle;
			author = aAuthor;
			pages = aPages;

			bookCreated();
			hasAuthor();

		}

		void hasAuthor() {
			if (author != "") {
				cout << "There is an author named, " << author << endl;
			}
			else {
				cout << "There is no author" << endl;
			}
		}

		void setAuthor(string aAuthor) {
			author = aAuthor;
		}

		string getAuthor() {
			return author;
		}
};

class Textbook : public Book {

public:
	// inherit Book constructor
	Textbook(string aTitle = "", string aAuthor = "", int aPages = 0) : Book(aTitle , aAuthor , aPages ) {

	}

	// override the function in base class
	void hasAuthor() {
		if (getAuthor() != "") {
			cout << "There is an author named, " << getAuthor() << "!!!" << endl;
		}
		else {
			cout << "There is no author!!!" << endl;
		}
	}
};

void testBookClass()
{
	Book book1("Happy Tree Friends", "Friends of Trees", 100);
	Book book2();

	cout << book1.getAuthor();
}

void testBookClass2()
{
	// hasAuthor in base constructor will be trigger from the base class instead
	Textbook Biology("Happy", "Tree", 100);

	// this will trigger from Textbook class
	Biology.hasAuthor();

}

int x = 123567;

void testScope()
{
	int x = 123;

	cout << x << endl;
	// scope resolution operator stated that this x belong to global variable
	cout << :: x << endl;
}

// recursive
int factorialRecursive(int x)
{
	// need a base case
	if (x == 1) {
		return 1;
	}
	else {
		return x * factorialRecursive(x - 1);
	}
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
void power(int baseNum, int powNum);
void twoDArray();
void pointers();
void passByReference(int *x, int *y);
void testPassByReference();

int main()
{
	Car Vios;

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
	int index = 0;
	int nums[] = { 1,2,3,4,5 };
	int len = sizeof(nums) / sizeof(nums[0]);

	for (index; index <= 10; index++) {
		cout << "Index: " << index << endl;
	}

	cout << "length of array: " << len << endl;

	for (int i = 0; i < len ; i++) {
		cout << nums[i] << endl;
	}
}

void power(int baseNum, int powNum)
{
	int result = 1;

	for (int i = 0; i < powNum; i++) {
		result = result * baseNum;
	}

	cout << "Result of power " << powNum << " of " << baseNum << " is " << result << endl;
}

void twoDArray()
{
	int number2d[][2] = {
		{1, 2},
		{3, 4},
	};

	int lenRow = sizeof(number2d) / sizeof(number2d[0]);
	int lenCol = sizeof(number2d[0]) / sizeof(int);

	cout << "length of row: " << lenRow << endl;
	cout << "length of column: " << lenCol << endl;

	cout << "Testing " << number2d[0][0] << endl;

	for (int i = 0; i < lenRow; i++) {
		for (int j = 0; j < lenCol; j++) {
			cout << number2d[i][j] << endl;
		}
	}
}

void pointers()
{
	// 100 is stored in physical memory, age is storing the memory address
	int age = 100;
	// pointer variable
	int *pAge = &age;

	// this is a pointer (address) to the physical memory
	cout << &age << endl;
	// dereferencing a pointer is grabbing value in that physical address
	cout << *pAge << endl;
}

// receive memory address and dereferencing it
void passByReference(int *x, int *y)
{
	// switch variable
	int temp = *x;

	// directly tap into value in memory address instead of copy
	*x = *y;
	*y = temp;
}

void testPassByReference()
{
	int a = 100;
	int b = 200;

	passByReference(&a, &b);

	cout << a << " and " << b << endl;
}