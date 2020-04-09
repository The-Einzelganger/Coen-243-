//
//  date.h
//  Assignment 5 Question 2)
//
//  Timothy Morvan (40126094) and
//  Trần Nhật Minh (40122374)
//
//  Environment: Xcode, Version 2019

/* date.h */
#ifndef DATE_H_
#define DATE_H_

#include <iostream>
#include <string>

class Date {

public:
    
    Date(int=1, int=1, int=2000); // sets day, month, year
    void setDate(int, int, int);  // sets the date
    void printDate() const;  // prints date to the screen
    void setLettermonth();  // Changes the chosen month to letters
    std::string getLettermonth(); // return the month in letters
    void printLetterDate(std::string lm, int d, int y); // Prints the date in the letter format
    
private:
 
    int day;
    int month;
    int year;
    std::string lettermonth;
};

#endif /* DATE_H_ */
