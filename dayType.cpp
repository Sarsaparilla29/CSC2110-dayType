#include <iostream>
#include <string>
#include "dayType.h"

dayType::~dayType() { //Destructor
    std::cout << "Destroying Day" << std::endl;
}


void dayType::setDayNum(std::string d)
{
    for(int i = 0; i < 7; i++){
        if(d != day[i])
            continue;
        else
            dayNum = i;
    }
}

std::string dayType::getDay(){
    return day[dayNum];
}
int dayType::getDayNum() {
    return dayNum;
}
void dayType::printDay(){
    std::cout << "Today is a " << day[dayNum] << "." << std::endl;
}

void dayType::printTomorrow() {
    if ((dayNum + 1) >= 7)
        std::cout << "Tomorrow will be a " << day[0] << "." << std::endl;
    else
        std::cout << "Tomorrow will be a " << day[dayNum + 1] << "." << std::endl;
}

void dayType::printYesterday() {
    if(dayNum <= 0)
        std::cout << "Yesterday was a " << day[6] << "." << std::endl;
    else
        std::cout << "Yesterday was a " << day[dayNum - 1] << "." << std::endl;
}
int dayType::calcDay(int add) {
    int x = 0;
    while (add > 7){
        add = add - 7;
    }
    x = dayNum + add;
    while (x >= 7) {
        x = x - 7;
    }
    std::cout << "That day will be a " << day[x] << ".\n" << std::endl;
}
