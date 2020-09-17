#include <iostream>
#include <string>
#include "dayType.h"

int main()
{
    int numDay;
    std::string dayN;
    dayType day;
    std::cout << "Welcome to the Day Type Program" << std::endl;
    std::cout << "-------------------------------\n" << std::endl;

    std::cout << "Please enter Today's date(e.g. Sun, Mon, Tue,...): ";
    std::cin >> dayN;
    day.setDayNum(dayN);
    day.printDay();
    day.printTomorrow();
    day.printYesterday();
    std::cout << "Please enter a number corresponding to a number of future days: ";
    std::cin >> numDay;
    day.calcDay(numDay);

    std::cout << "End of Day Type Program" << std::endl;
    return 0;
}
