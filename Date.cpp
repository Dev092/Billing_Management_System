#include "Date.h"

Date::Date():day(9),month(2),year(2015)
{
}
Date::Date(int day, int month, int year) {
    validateAndSetDate(day, month, year);
}

void Date::setDay(int day)
{
        validateAndSetDate(day, month, year); 
}
void Date::setMonth(int month) {
    validateAndSetDate(day, month, year);
}

void Date::setYear(int year) {
    validateAndSetDate(day, month, year);
}
std::ostream &operator<<(std::ostream &os, const Date &rhs)
{
    os << "day: " << rhs.day
       << " month: " << rhs.month
       << " year: " << rhs.year;
    return os;
}

void Date::accept() {
    int day, month, year;

    std::cout << "Enter day (1-31): ";
    std::cin >> day;

    std::cout << "Enter month (1-12): ";
    std::cin >> month;

    std::cout << "Enter year: ";
    std::cin >> year;

    validateAndSetDate(day, month, year);
}
bool Date::isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void Date::validateAndSetDate(int day, int month, int year) {
    if (month < 1 || month > 12) {
        throw std::out_of_range("Invalid month. Month should be between 1 and 12.");
    }

    if (month == 2) {
        if (isLeapYear(year)) {
            if (day < 1 || day > 29) {
                throw std::out_of_range("Invalid day for February in a leap year.");
            }
        } else {
            if (day < 1 || day > 28) {
                throw std::out_of_range("Invalid day for February in a non-leap year.");
            }
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day < 1 || day > 30) {
            throw std::out_of_range("Invalid day for the specified month.");
        }
    } else {
        if (day < 1 || day > 31) {
            throw std::out_of_range("Invalid day for the specified month.");
        }
    }

    this->day = day;
    this->month = month;
    this->year = year;
}