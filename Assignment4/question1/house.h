#ifndef house_hpp
#define house_hpp

#include <string>

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
    
    // member functions / operations / accessing function
    int getAge();
    void setAge(int age);   // set age of house
    
    std::string getType();
    void setType (std::string type);    // set type of house
    
    int getUnit();
    void setUnit(int unit);     // set units in the house
    
    double getCost();
    void setCost(double cost);     // set cost of house

    double EstimatePrice();
};


#endif /* house_hpp */
