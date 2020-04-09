//
//  testdate.cpp
//  Assignment 5 Question 2)
//
//  Timothy Morvan (40126094) and
//  Trần Nhật Minh (40122374)
//
//  Environment: Xcode, Version 2019

#include "date.h"

int main() {
    int d=0, m=0, y=0;

    // Creating two objects d1 and d2
    Date *d1 = new Date(13,4,2020);
    Date *d2 = new Date;
    
    // printing out the values assigned to d1
    std::cout << "Here is the date assigned to first object d1: ";
    d1->printDate();
    
    // Giving the month it's letter equivalent
    d1->setLettermonth();
    std::cout << "Here is that date using the following format: (Month dd,yyyy)";
    d1->printLetterDate(d1->getLettermonth(), d, y);
    
    // User inputs date values to be assigned to the second object
    std::cout << "Now assigning values to second object (d2),\nEnter the date using numbers with following format (day/month/year):\n\nDay: ";
    std::cin >> d;
    std::cout << "Month (Number!): ";
    std::cin >> m;
    std::cout << "Year: ";
    std::cin >> y;
    
    // Assigning the values to object d2
    d2->setDate(d, m, y);
    std::cout << "\nHere is the date that you entered in number format: ";
    d2->printDate();
    
    // changing the month to the letter format
    d2->setLettermonth();
    std::cout << "Here is the date using the letter format (Month dd,yyyy)";
    d2->printLetterDate(d2->getLettermonth(), d, y);
    
    // Modifying the first date
    
    std::cout << "Modifying the date of the first object (d1):";
    // Assigning new values
    d1->setDate(12, 12, 2012);
    std::cout << "\nHere is the modified date in the number format:";
    d1->printDate();
    
    // Assigning the month in letters
    d1->setLettermonth();
    std::cout << "Here is the modified date in the letter format:";
    d1->printLetterDate(d1->getLettermonth(), d, y);
    
    delete d1;
    delete d2;
    
    return 0;
}

