//
//  date.cpp
//  Assignment 5 Question 2)
//
//  Timothy Morvan (40126094) and
//  Trần Nhật Minh (40122374)
//
//  Environment: Xcode, Version 2019

#include "date.h"

using namespace std;


// Constructor
Date::Date (int d, int m, int y)
{
    day = d;
    month = m;
    year = y ;
}

// Sets date
void Date::setDate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y ;
}

// Prints date
void Date::printDate() const
{
     cout << "\n" << month << "/" << day << "/" << year << "\n";
}

// Finding the months letter format

void Date::setLettermonth()
{
    std::string lm;
    
    switch (month) {
        case 1:
            lm = "January ";
            lettermonth = lm;
            break;
            
        case 2:
            lm = "February ";
            lettermonth = lm;
            break;
            
        case 3:
            lm = "March ";
            lettermonth = lm;
            break;
            
        case 4:
            lm = "April ";
            lettermonth = lm;
            break;
            
        case 5:
            lm = "May ";
            lettermonth = lm;
            break;
            
        case 6:
            lm = "June ";
            lettermonth = lm;
            break;
            
        case 7:
            lm = "July ";
            lettermonth = lm;
            break;
            
        case 8:
            lm = "August ";
            lettermonth = lm;
            break;
            
        case 9:
            lm = "September ";
            lettermonth = lm;
            break;
            
        case 10:
            lm = "October ";
            lettermonth = lm;
            break;
            
        case 11:
            lm = "November ";
            lettermonth = lm;
            break;
            
        case 12:
            lm = "December ";
            lettermonth = lm;
            break;
        default :
            lm = "Not a valid Month";
            lettermonth = lm;
            break;
    }
}

std::string Date::getLettermonth()
{
    return lettermonth;
}

// Printing out the date
void Date::printLetterDate(std::string lm, int d, int y) {
    lm = lettermonth;
    d = day;
    y = year;
    std::cout << "\n" << lm << d << ", " << y << "\n\n";
    
}
