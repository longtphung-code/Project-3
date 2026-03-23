//Program askes me to make a ingredient aduster for the amount of cookies I want to make
//each cookie requires 1.5 cups of sugar, 1.0 cup of butter, and 2.75 cups of sugar
//Ask for user inpute and make the cookies required into a ratio of the ingredients

#include <iostream>
using namespace std;

int main() {
	int cookies;

	//ask for user input on the number of cookies they want to make
	cout << "Enter the number of cookies you want to make! ";
	cin >> cookies;

	// ingredient amount per cookie
	const	double flour = 2.75;
	const	double butter = 1.0;
	const	double sugar = 1.5;

	const	double cookie = flour + butter + sugar;

	return 0;
}

