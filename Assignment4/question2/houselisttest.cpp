//
//  houselisttest.cpp
//  Assignment 4 Question 2)
//
//  Timothy Morvan (40126094) and
//  Trần Nhật Minh (40122374)
//
//  Environment: Xcode, Version 2019

#include "Houselist.hpp"

using namespace std;

int main (){

    int age = 0, unit = 0;
    std::string type, answer;
    double price = 0;
    bool flag = true;
    
    HouseList hsl;
    House hs;
    
    cout << "Hello,\nFrom this program you will be able to set a list of houses and look at their attributes.\nYou will first need to create a list of houses.\n\n";
    
    // Implementing houses in a list
    while(flag == true) {
        
        cout << "Creating a new house: \nEnter the age: ";
        cin >> age;
        hs.setAge(age);
        
        cout << "Enter the house type (i.e. Attached, Semi-Attached, Detached): ";
        cin >> type;
        hs.setType(type);
        
        cout << "Enter the number of units: ";
        cin >> unit;
        hs.setUnit(unit);
        
        cout << "Enter the price of the house: $ ";
        cin >> price;
        hs.setCost(price);
        
        // Adding house in the list
        hsl.addHouse(hs);
        
        cout << "Do you want to add another house to the list? (yes/no) \n";
        cin >> answer;
        if (answer == "no"){
            flag = false;
        }
    }
    
    // Calling Member Functions
    hsl.printHousePrice();
    hsl.HouseinRange(hsl);
    hsl.HouseInformation();
    
    cout << "\nHope your search for a new house went well, come back soon!\n";
}

