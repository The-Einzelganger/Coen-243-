//
//  houselisttest.cpp
//  Assignment 4 Question 2)
//
//  Timothy Morvan (40126094) and
//  Trần Nhật Minh (40122374)
//
//  Environment: Xcode, Version 2019

#include "houselist.h"
#include <iostream>

int main (){

    int age = 0, unit = 0;
    std::string type, answer;
    double price = 0;
    bool flag = true;
    
    HouseList hsl;
    House hs;
    
    std::cout << "Hello,\nFrom this program you will be able to set a list of houses and look at their attributes.\nYou will first need to create a list of houses.\n\n";
    
    // Implementing houses in a list
    while(flag == true) {
        
        std::cout << "Creating a new house: \nEnter the age: ";
        std::cin >> age;
        hs.setAge(age);
        
        std::cout << "Enter the house type (i.e. Attached, Semi-Attached, Detached): ";
        std::cin >> type;
        hs.setType(type);
        
        std::cout << "Enter the number of units: ";
        std::cin >> unit;
        hs.setUnit(unit);
        
        std::cout << "Enter the price of the house: $ ";
        std::cin >> price;
        hs.setCost(price);
        
        // Adding house in the list
        hsl.addHouse(hs);
        
        std::cout << "Do you want to add another house to the list? (yes/no) \n";
        std::cin >> answer;
        if (answer == "no"){
            flag = false;
        }
    }
    
    // Calling Member Functions
    hsl.printHousePrice();
    hsl.HouseinRange(hsl);
    hsl.HouseInformation();
    
    std::cout << "\nHope your search for a new house went well, come back soon!\n";
}

