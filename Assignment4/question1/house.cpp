//
//  house.cpp
//  Assignment 4
//
//  Created by Timothy Morvan on 13/03/2020.
//  Copyright © 2020 Timothy Morvan. All rights reserved.
//

#include "house.hpp"

using namespace std;

// Constructor initialize all the private data members of the class to 0
House::House() {
    
    age = 0;
    type = "Detached";
    unit = 3;
    cost = 250000;
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

    double House::EstimatePrice() {
        
        double price = 0;
        
        if (type == "Attached"){
            price = 100000;
            
            for (int i = 1; i <= age; i++){
                if (i <= 5){
                    price *= 1.01;
                }
                else if (i > 5) {
                    price *= 1.02;
                }
            }
        }
        
        else if (type == "Semi-Attached"){
            price = 150000;
            
            for (int i = 1; i <= age; i++){
                if (i <= 5){
                    price *= 1.02;
                }
                else if (i > 5) {
                    price *= 1.03;
                }
            }
        }
        
        else if (type == "Detached"){
            price = 200000;
            
            for (int i = 1; i <= age; i++){
                price *= 1.02;
            }
        }
    return price;
}

