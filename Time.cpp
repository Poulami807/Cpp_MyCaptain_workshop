//Write a C++ program to read time in HH:MM:SS format and convert into total seconds using class.

#include <iostream>

using namespace std;
 
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getTime(void);
        void convertIntoSeconds(void);
        void displayTime(void);
};
 
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          cin >> hh;
    cout << "Minutes? ";          cin >> mm;
    cout << "Seconds? ";          cin >> ss;
}
 
void Time::convertIntoSeconds(void)
{
    seconds = hh*3600 + mm*60 + ss;
}
 
void Time::displayTime(void)
{
    cout << "The time is = " <<hh << ":"<< mm << ":"<< ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T; 
     
    T.getTime();
    T.convertIntoSeconds();
    T.displayTime();
     
    return 0;
}
