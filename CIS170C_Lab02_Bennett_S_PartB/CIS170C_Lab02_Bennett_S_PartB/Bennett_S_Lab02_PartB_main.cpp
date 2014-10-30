/* Developer: Steven Bennett
	Date: March 16, 2013
	Assignment: Week 2 Lab 2 Part B Shipping Charges
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Display program information
	cout << "This program determines shipping charges based on the customer's total purchase." << endl;

	//Prompt user for purchaseAmount
	cout << "Enter purchase amount to find shipping charges: ";
	double purchaseAmount;
	cin >> purchaseAmount;

	//Determine shippingCharge
	double shippingCharge;
	if (purchaseAmount > 5000)
		shippingCharge = 20;
	else if (purchaseAmount > 1000)
		shippingCharge = 15;
	else if (purchaseAmount > 500)
		shippingCharge = 10;
	else if (purchaseAmount > 250)
		shippingCharge = 8;
	else if (purchaseAmount > 0)
		shippingCharge = 5;
		else
		shippingCharge = 0;

	//input validation
	if (shippingCharge == 0)
		cout << "\nError! Incorrect input!\n" << endl;
	else
	{
		cout << setprecision(2) << fixed;
		cout << "\nThe shipping charge on a purchase of $" << purchaseAmount << " is $" << shippingCharge << ".\n" << endl;
	}
	return 0;
}
