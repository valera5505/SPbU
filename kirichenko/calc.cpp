#include <iostream>

void calculator() {
	int operation, a, b;

	std::cout << "Enter first number: ";
	std::cin >> a;
	std::cout << "And now second one: ";
	std::cin >> b;

	std::cout << "Now choose an operation:\n1) +\n2) -\n3) *\n4) /\n5) %\n";
	std::cin >> operation;

	switch(operation) {
		case 1:
			std::cout << a << " + " << b << " = " << a + b << std::endl;
			break;
		case 2:
			std::cout << a << " - " << b << " = " << a - b << std::endl;
			break;
		case 3:
			std::cout << a << " * " << b << " = " << a * b << std::endl;
			break;
		case 4:
			std::cout << a << " / " << b << " = " << a / b << std::endl;
			break;
		case 5:
			std::cout << a << " % " << b << " = " << a % b << std::endl;
			break;
		default:
			std::cout << "Can't find requested operation" << std::endl; 
	}

	std::cout << "What now?\n1) One more calculation, please\n2) Exit\n";
	std::cin >> operation;

	switch(operation) {
		case 1:
			calculator();
			break;
		default:
			std::cout << "Bye" << std::endl;
	}
}

int main() {
	std::cout << "Welcome to basic Calculator!" << std::endl;

	calculator();

	return 0;
}