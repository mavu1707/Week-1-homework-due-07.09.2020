
#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "What is your full name, please?: ";
    getline(std::cin, name); 
    
    std::string Initiales;
    std::cout << "What is your initials, please?: ";
    std::cin >> Initiales; 
    

    int Age = 0;
    std::cout << "What is your age, please?: ";
    std::cin >> Age;
    

    long Phonenumber;
    std::cout << "Whats is your phone number, please?: ";
    std::cin >> Phonenumber;
   

    std::string Dateofbirth;
    std::cout << "What is your date of birth, please?: ";
    std::cin >> Dateofbirth; 
    
    std::cout << "\n\n\n------------------ \n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Initials: " << Initiales << "\n";
    std::cout << "Age: " << Age << "\n";
    std::cout << "Phone number: " << Phonenumber << "\n";
    std::cout << "Date of birth: " << Dateofbirth << "\n";
    std::cout << "------------------";



}

