#include <iostream>

int main() {

	double a;
	double b;
	double sum;
	int choice;
	int second;
	double square;
	double root;	

	std::cout << "Hello, welcome to the calculator! \n"; 
	std::cout << "Please enter the first number: \n";
	std::cin >> a;

	std::cout << "Please enter the second number: \n";
	std::cin >> b;

	std::cout << "Do you want addition (+), multiplication (*), subtraction (-) or division (/) ? \n";
	std::cout << "If you want addition, type 1, if multiplication 0, if subtraction -1, or division 5 ? \n";
	std::cin >> choice;


	if (choice == 1) {

		std::cout << "\nYou chose addition.\n";
		
		sum = a + b;
		std::cout << "This is the sum of those two numbers: \n" << sum;
		

		
	}

	else if (choice == 0){
		std::cout << "\nYou chose multiplication.\n";
		sum = a * b;
		std::cout << "This is the result of those two numbers: " << sum;
	}

	else if (choice == 5) {

		std::cout << "\nYou chose division.\n";
		sum = a / b;
		std::cout << "This is the result of those two numbers: " << sum;
	}

	else {

		std::cout << "\nYou chose subtraction.\n";
		sum = a - b;
		std::cout << "This is the result of those two numbers: " << sum;
	}

	std::cout << "\n\nDo you want to square this number, or get the square root of this number (if positive)? \n";
	std::cout << "If you want to get the square, type 1, if not type 0: \n";
	std::cin >> second;

	if (second == 1) {

		std::cout << "\nYou chose square.\n";

		square = sum * sum;

			std::cout << "This is the squared number: " << square;
	}
	
	else {

		std::cout << "\nYou chose square root. \n";

		root = sqrt(sum);

		std::cout << "This is the square root of the number: " << root;
	}

	
}
