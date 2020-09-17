#pragma once
#include <string>
class dayType {
    private:
        std::string day[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
        int dayNum;
    public:
        void setDayNum(std::string d);
        std::string getDay();
        int getDayNum();
        int calcDay(int add);
        void printDay();
        void printTomorrow();
        void printYesterday();

        ~dayType();
};
