//Program askes me to make a ingredient aduster for the amount of cookies I want to make
//each cookie requires 1.5 cups of sugar, 1.0 cup of butter, and 2.75 cups of sugar
//Ask for user inpute and make the cookies required into a ratio of the ingredients

#include <iostream>
#include <random>

int main() {
	// random number generator
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib_int(1, 100);

	//generate two random numbers
	int num1 = distrib_int(gen);
	int num2 = distrib_int(gen);
	int correctAnswer = num1 + num2;

	//display problem
	std::cout << "What is " << num1 << " + " << num2 << "?\n";

	//pause progoram
	std::cout << "Press Enter when you're ready to see the answer...";
	std::cin.ignore();	//clears buffer
	std::cin.get(); 	//waits for user input

	//display answer
	std::cout << "The correct answer is: " << correctAnswer << std::endl;

	return 0;
}
