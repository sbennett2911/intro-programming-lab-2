/* Developer: Steven Bennett
	Date: March 16, 2013
	Assignment: Week 2 Lab Part A "Display Smallest Number" */
	
#include <iostream>

using namespace std;

int main()
{
//Display welcoming message and purpose of program
cout << "This program will prompt for two numbers,\n and display the smallest value to the user.\n" << endl;

//Prompt user for number1
cout << "Please enter first value: ";
int number1;
cin >> number1;

//Prompt user for number2
cout << "Please enter second value: ";
int number2;
cin >> number2;

//Compare number1 and number2. If numbers are equal display "The two numbers are equal."
int smallestNumber = 0;
if (number1 == number2)
	cout << "\nThe two numbers are equal.\n" << endl;
else if (number1 > number2)
{
	smallestNumber = number2;
	cout << "\nThe smallest number is: " << smallestNumber << "\n" << endl;
}
else
{
	smallestNumber = number1;
	cout << "\nThe smallest number is: " << smallestNumber << "\n" << endl;
}

//Display termination message.
cout << "Thanks for using the program!" << endl;

return 0;
}



