//Program askes me to make a ingredient aduster for the amount of cookies I want to make
//each cookie requires 1.5 cups of sugar, 1.0 cup of butter, and 2.75 cups of sugar
//Ask for user inpute and make the cookies required into a ratio of the ingredients

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	// Input princpal amount
	std::cout << "What is the principal amount? ";
	double principal;
	cin >> principal;

	//Input rate of interest as a percentage
	std::cout << "What is the interest rate in percentage?: ";
	double rate;
	cin >> rate;

	// convert to percentage to decimal
	rate = rate / 100;

	//take user input for time the interest is compounded during a year 
	cout << "How many times is the interest compounded a year? ";
	int timesCompounded;
	cin >> timesCompounded;	

	// Calculate the amount of interest earned
	double amount = principal * pow((1 + rate / timesCompounded), timesCompounded);
	double interestEarned = amount - principal;


	//display the report
	cout << fixed << setprecision(2);
	cout << "\nInterest Rate: " << rate * 100 << "%\n";
	cout << "Times Compounded: " << timesCompounded << "\n";
	cout << "Principal : $" << principal << "\n";
	cout << "Interest Earned: $" << interestEarned << "\n";
	cout << "Amount in Savings: $" << amount << "\n";

	return 0;
	}

