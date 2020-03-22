//
//  Houselist.cpp
//  Assignment 4 Question 2)
//
//  Timothy Morvan (40126094) and
//  Trần Nhật Minh (40122374)
//
//  Environment: Xcode, Version 2019

#include "houselist.h"
#include <iostream>

// Constructor initialize all the private data members of the class to 0
House::House() {
    
    age = 0;
    type = " ";
    unit = 0;
    cost = 0;
    // end of constructor
}

// Define member function

House::House (int age, std::string type, int unit, double cost) {
    
    this -> age = age;
    this -> type = type;
    this -> unit = unit;
    this -> cost = cost;
    
}

    // Define the funtions as part of the class

    int House::getAge() {
        return this -> age;
    }
    
    void House::setAge(int age) {
        this -> age = age;
    }

    std::string House::getType() {
        return this -> type;
    }

    void House::setType(std::string type) {
        this -> type = type;
    }

    int House::getUnit() {
        return this -> unit;
    }

    void House::setUnit(int unit) {
        this -> unit = unit;
    }

    double House::getCost(){
        return this -> cost;
    }

    void House::setCost(double cost){
        this -> cost = cost;
    }

    void House::AllHouseAttributes(){
 
    std::cout << "\nHouse Attributes: \nAge: " << age << "\nType: " << type << "\nNumber of units: " << unit << "\nCost: $ " << cost << std::endl;

    }

    // Constructor function
    HouseList::HouseList() {
    items = new House[LIST_SIZE];
    numItems = 0;
    }

    // Other member functions:

    // Add house to the list function
    void HouseList::addHouse(const House &h){
    
    items[numItems] = h;
    ++ numItems;
    
    }

    // Function that prints all the house prices in the list
    void HouseList::printHousePrice (){
        std::cout << "\n\nHere are all the prices of the houses in the list:\n";
        for (int i = 0; i < numItems; i++){
            std::cout << (i+1) << ": $" << items[i].getCost() << "\n";
        }
        std::cout << "\n";
    }

    // Function that finds the houses in the selected range
    void HouseList::HouseinRange (const HouseList &hsl){
    
        double min, max;
        int count = 0;
        
        while (count == 0){
            std::cout << "Enter the price range of the houses which interest you: \nMinimum: $ ";
            std::cin >> min;
            std::cout << "Maximum: $ ";
            std::cin >> max;
        
            std::cout << "\nHere are the caracteristics of the houses in your price range: \n";
    
            for (int k=0; k< LIST_SIZE; k++){
                if (items[k].getCost() >= min && items[k].getCost() <= max){
                    items[k].AllHouseAttributes();
                    count++;
                }
            }
        
            // If price range does not inclide any house
            if (count == 0){
                std::cout << "Actually there are no houses in that price range, Please try again.\n\n";
            }
        }
}

// Function that print all the information about a house
void HouseList::HouseInformation(){
    std::cout << "\n\nFinally, if interested here is the information gathered on every house in the list:\n";
    for (int s = 0; s < numItems; s++){
        items[s].AllHouseAttributes();
    }
}

HouseList::~HouseList(){
    delete [] items;
    std::cout << "House list destroyed !" << std::endl;
}

