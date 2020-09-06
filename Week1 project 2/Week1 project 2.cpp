#include <iostream>
#include <string>


int main()
{
	std::string name;
	std::cout << "What's your name? ";
	getline(std::cin, name);


	int age = 0;
	std::cout << "What's your age? ";
	std::cin >> age;

	std::string coffee;
	std::cout << "Do you like coffee, yes or no? ";
	std::cin >> coffee;
	
	std::cout << "\n\n\n";
	std::cout << "Hello, good day " << name << "\n";
	std::cout << "Your age is " << age << "\n";
	if (coffee == "yes") {
		std::cout << "You seem to like coffe\n";
	}
	else {
		std::cout << "You don't seem to like coffee\n";
	}

		

	
}