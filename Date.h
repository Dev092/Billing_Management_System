#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
private:
    int day;
    int month;
    int year;

public:
    // Constructors
    Date();
    Date(int day, int month, int year);
    void accept();
    bool isLeapYear(int year);
    void validateAndSetDate(int day, int month, int year);

    int getDay() const { return day; }

    int getMonth() const { return month; }

    int getYear() const { return year; }
    void setDay(int d);
    

    void setMonth(int month);
    void setYear(int year);
   

    friend std::ostream &operator<<(std::ostream &os, const Date &rhs);
};

#endif // DATE_H
