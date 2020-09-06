
#include <iostream>
#include <string>
int main()
{
    std::string drink;

    std::cout << "What is your favorite drink?\n";
    std::cout << "1) Coke\n";
    std::cout << "2) Tea\n";
    std::cout << "3) Coffee\n";
    getline(std::cin, drink);
    std::cout << "your favorite drink is " << drink << ; 

}


