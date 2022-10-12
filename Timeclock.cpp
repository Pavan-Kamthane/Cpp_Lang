#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
   private:
       int hours;
       int minutes;
       int seconds;
   public:
       int get_time();
       void put_time();
};

int Time::get_time()
{
   cout << "Enter hours: ";
   cin >> hours;
   if ( std::cin.fail() ) {
       cout << "Error entering hours\n";
       cin.clear();
       cin.ignore();
       return -1;
   }
   if (hours < 0 || hours > 23) {
       cout << "Incorrect hours value\n";
       return -1;
   }

   cout << "Enter minutes: ";
   cin >> minutes;
   if ( std::cin.fail() ) {
       cout << "Error entering minutes\n";
       cin.clear();
       cin.ignore();
       return -1;
   }
   if (minutes < 0 || minutes > 59) {
       cout << "Incorrect minutes value\n";
       return -1;
   }

   cout << "Enter seconds: ";
   cin >> seconds;
   if ( std::cin.fail() ) {
       cout << "Error entering seconds\n";
       cin.clear();
       cin.ignore();
       return -1;
   }
   if (seconds < 0 || seconds > 59) {
       cout << "Incorrect seconds value\n";
       return -1;
   }
   return 0;
}

void Time::put_time()
{
   cout << setfill('0') << setw(2) << hours << ":"
        << setfill('0') << setw(2)<< minutes << ":"
        << setfill('0') << setw(2) << seconds << endl;
}

int main()
{
   Time t;
   int res;

   while(1) {
       if (t.get_time() == 0) {
           t.put_time();
       }
   }

   return 0;}