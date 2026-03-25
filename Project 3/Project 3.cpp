//Program askes me to make a ingredient aduster for the amount of cookies I want to make
//each cookie requires 1.5 cups of sugar, 1.0 cup of butter, and 2.75 cups of sugar
//Ask for user inpute and make the cookies required into a ratio of the ingredients

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int cookies;


	// original recipe yield
	const int original_cookies = 48;

	// ingredient amount for 48 s
	const	double sugar_amount = 1.5;
	const	double butter_amount = 1.0;
	const	double flour_amount = 2.75;


	//ask for user input on the number of cookies they want to make
	cout << "Enter the number of cookies you want to make! ";
	cin >> cookies;



	//Calculate per-cookie amount based on original 48 scale
	double sugar_per_cookie = sugar_amount / original_cookies;
	double butter_per_cookie = butter_amount / original_cookies;
	double flour_per_cookie = flour_amount / original_cookies;


	// scale to desiredcookies
	double total_sugar = sugar_per_cookie * cookies;
	double total_butter = butter_per_cookie * cookies;
	double total_flour = flour_per_cookie * cookies;

	//formating output
	cout << fixed << setprecision(3);


	// display results
	cout << "\nFor " << cookies << " Cookies, you will need:\n";
	cout << "Sugar " << total_sugar << " cups\n";
	cout << "Butter:" << total_butter << " cups\n";
	cout << "Flour: " << total_flour << " cups\n";
	cout << "\nThis recipe will produce " << cookies << " cookies.\n";


	return 0;
}
