//
//  testhouse.cpp
//  Assignment 4 Question 1)
//
//  Timothy Morvan (40126094) and
//  Trần Nhật Minh (40122374)
//
//  Environment: Xcode, Version 2019

#include <iostream>
#include "house.hpp"

int main() {
    
    std::cout << "Hello,\nIn this program with the given information about a house we will tell you its characteristics and estimate its price for you\n\n";
    std::cout << "You will have to enter the data for two houses and it will have the following format:\n";
    
    int modifyage = 0, modifunit =0;
    std::string modiftype;
    double modifcost = 0.0;
    
    House h1 (20 , "Attached", 8, 150000);
    House h2 (18 , "Detached", 11, 250000);
    
    // This is the house example
    
    std::cout << "Example for an Attached house:\n";
    
    std::cout << "House is " << h1.getAge() << " years old"<< std::endl;
    std::cout << "House has type: " << h1.getType() << std::endl;
    std::cout << "House has " << h1.getUnit() << " rooms"<< std::endl;
    std::cout << "The unofficial cost is said to be " << h1.getCost() << " $"<< std::endl;
    std::cout << "House has an estimated price of " << h1.EstimatePrice() << " $" << std::endl;
    
    std::cout << "\nExample for a Detached house:\n";
    
    std::cout << "House is " << h2.getAge() << " years old"<< std::endl;
    std::cout << "House has type: " << h2.getType() << std::endl;
    std::cout << "House has " << h2.getUnit() << " rooms"<< std::endl;
    std::cout << "The unofficial cost is said to be " << h2.getCost() << " $"<< std::endl;
    std::cout << "House has an estimated price of " << h2.EstimatePrice() << " $" << std::endl;

    std::cout << "\n\nNow it's your turn:\n\nHouse 1:\n";
    
    // House 1
    
    std::cout << "Enter the age of house 1: ";
    std::cin >> modifyage;
    h1.setAge(modifyage);
    
    std::cout << "Enter house 1 type (i.e. Attached, Semi-Attached, Detached): ";
    std::cin >> modiftype;
    // Replacing the possible mistakes
    modiftype[0] = toupper(modiftype[0]);
    modiftype[5] = (!isalpha(modiftype[4]) ? toupper(modiftype[5]) : modiftype[5]);
    h1.setType(modiftype);
    
    std::cout << "Enter the number of units (rooms): ";
    std::cin >> modifunit;
    h1.setUnit(modifunit);
    
    std::cout << "Enter the unofficial cost offered: ";
    std::cin >> modifcost;
    h1.setCost(modifcost);

    
    // House 2
    std::cout << "\nHouse 2\n";
    std::cout << "Enter the house 2 age: ";
    std::cin >> modifyage;
    h2.setAge(modifyage);
    
    std::cout << "Enter house 2 type (i.e. Attached, Semi-Attached, Detached): ";
    std::cin >> modiftype;
    
    // Replacing the possible mistakes
    modiftype[0] = toupper(modiftype[0]);
    modiftype[5] = (!isalpha(modiftype[4]) ? toupper(modiftype[5]) : modiftype[5]);
    h2.setType(modiftype);
    
    std::cout << "Enter the number of units (rooms) in house 2: ";
    std::cin >> modifunit;
    h2.setUnit(modifunit);
    
    std::cout << "Enter the unofficial cost offered for house 2: ";
    std::cin >> modifcost;
    h2.setCost(modifcost);
    
    
    // Output data of house 1
    std::cout << "\n\nHere is the data collected for house 1: \n\n";
    std::cout << "The new age assigned to house 1 is: " << h1.getAge() << " years old" << std::endl;
    std::cout << "The type of house 1 is: " << h1.getType() << std::endl;
    std::cout << "The number of units is: " << h1.getUnit() << std::endl;
    std::cout << "The unofficial cost is: " << h1.getCost() << std::endl;
    std::cout << "The estimated price for house 1 is: " << h1.EstimatePrice();
    
    
    // Output data of house 2
    std::cout << "\n\nHere is the data collected for house 2: \n\n";
    std::cout << "The new age assigned to house 1 is: " << h2.getAge() << " years old" << std::endl;
    std::cout << "The type of house 2 is: " << h2.getType() << std::endl;
    std::cout << "The number of units is: " << h2.getUnit() << std::endl;
    std::cout << "The unofficial cost is: " << h2.getCost() << std::endl;
    std::cout << "The estimated price for house 2 is: " << h2.EstimatePrice() << std::endl;
    
    std::cout << "\nHope you got the information you where looking for!\n\n";
    
    return 0;
}
