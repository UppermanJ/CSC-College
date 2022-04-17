#ifndef EVENT_HPP
#define EVENT_HPP
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

class Time{
    public:
        Time();

        Time(int, int);

        void setTime(int, int);

        void getTime(int&, int&);

        void printTime();

        void incrementHours();

        void incrementMinutes();

    private:
        int hr;
        int min;

};

class Date{
    public:
        Date();
        Date(int, int, int);
        void setDate(int, int, int);
        void getDate(int&, int&, int&);
        void printDate();
        void printDateGlobal();
    private:
        int month;
        int day;
        int year;
};

class Event{
    public:
        Event();
        void setEventData(int hours, int minutes, int m, int d, int y , string name);
        void printEventData();
        void printEventDataGlobalTime();

    private:
        string eventName;
        Time eventTime;
        Date eventDay;

};

Time::Time()
{
    hr = 0;
    min = 0;
};

Time::Time(int hours, int minutes)
{
    if (0 <= hours && hours < 24)
    {
        hr = hours;
    }
    else
    {
        hr = 0;
    }

    if (0 <= minutes && minutes < 60)
    {
        min = minutes;
    }
    else
    {
        min = 0;
    }
};

void Time::setTime(int hours, int minutes)
{
    if (0 <= hours && hours < 24)
    {
        hr = hours;
    }
    else
    {
        hr = 0;
    }

    if (0 <= minutes && minutes < 60)
    {
        min = minutes;
    }
    else
    {
        min = 0;
    }
};

void Time::getTime(int &hours, int &minutes)
{
    hr = hours;
    min = minutes;
};

void Time::printTime()
{
    if (hr < 10)
    {
        cout << "0";
    }
    cout << hr << ":";

    if (min < 10)
    {
        cout << "0";
    }
    cout << min << endl;
};

void Time::incrementHours()
{
    hr++;
    if (hr > 23)
    {
        hr = 0;
    }
};

void Time::incrementMinutes()
{
    min++;
    if (min > 59)
    {
        min = 0;
        incrementHours();
    }
};

Date::Date()
{
    month = 1;
    day = 1;
    year = 1900;
};

Date::Date(int m, int d, int y)
{
    if (m >= 1 && m <= 12)
    {
        month = m;
    }
    else
    {
        month = 1;
    }

    if (d >= 1 && d <= 31)
    {
        day = d;
    }
    else
    {
        day = 1;
    }

    if (y >= 1900 && y <= 2022)
    {
        year = y;
    }
    else
    {
        year = 1900;
    }
};

void Date::setDate(int m, int d, int y)
{
    if (m >= 1 && m <= 12)
    {
        month = m;
    }
    else
    {
        month = 1;
    }

    if (d >= 1 && d <= 31)
    {
        day = d;
    }
    else
    {
        day = 1;
    }

    if (y >= 1900 && y <= 2022)
    {
        year = y;
    }
    else
    {
        year = 1900;
    }
};

void Date::getDate(int &m, int &d, int &y)
{
    month = m;
    day = d;
    year = y;
};

void Date::printDate()
{
    if (month < 10)
    {
        cout << "0";
    }
    cout << month << "/";

    if (day < 10)
    {
        cout << "0";
    }
    cout << day << "/";

    cout << year;
};

void Date::printDateGlobal()
{
    cout << year << "/";
    if (month < 10)
    {
        cout << "0";
    }
    cout << month << "/";

    if (day < 10)
    {
        cout << "0";
    }
    cout << day;
};

Event::Event()
{
    int hours = 0;
    int minutes = 0;
    int m = 1;
    int d = 1;
    int y = 1900;
    string name = "Christmas";
}

void Event::setEventData(int hours, int minutes, int m, int d, int y, string name)
{
    eventTime.setTime(hours, minutes);
    eventDay.setDate(m, d, y);

    eventName = name;
};

void Event::printEventData()
{
    cout << eventName << " occurs ";

    eventDay.printDate();

    cout << " at ";

    eventTime.printTime();
};

void Event::printEventDataGlobalTime()
{
    cout << eventName << " occurs ";

    eventDay.printDateGlobal();

    cout << " at ";

    eventTime.printTime();
};

#endif