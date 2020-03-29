//
//  Houselist.hpp
//  Assignment 4 Question 2)
//
//  Timothy Morvan (40126094) and
//  Trần Nhật Minh (40122374)
//
//  Environment: Xcode, Version 2019

#ifndef houselist_h
#define houselist_h

#include <iostream>
#include <string>

// Using the same House class as in question 1
class House {
    
    private :
    
    // data members
    int age;
    std::string type;
    int unit;
    double cost;

    
    public :
    
    // define constructor
    
    House ();
    House (int age, std::string type, int unit, double cost);
    
    // Member Functions / operations / accessing function
    
    int getAge();
    void setAge(int age);   // set age of house
    
    std::string getType();
    void setType (std::string type);    // set type of house
    
    int getUnit();
    void setUnit(int unit);     // set units in the house
    
    double getCost();
    void setCost(double cost);     // set cost of house
    
    void AllHouseAttributes();
};


class HouseList{
    
    private:
    
    // Data Members:
    
            static const size_t LIST_SIZE = 150; // the maximum items in the list
            House *items; // items will point to the dynamically allocated array
            size_t numItems; // the number of items currently in the list
    
    public:
    
    // Constructor:
                HouseList();
    
    // Member Functions:
                void printHousePrice();
                bool addHouse(const House &h);
                void HouseinRange(const HouseList &hsl);
                void HouseInformation();
                ~HouseList();
};

#endif /* houselist_h */
