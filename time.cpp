#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main() {
   // current date/time based on current system
   time_t now = time(0);

   cout << "Number of sec since Junaury 1,1970 is ::" << now << endl;

   tm *ltm = localtime(&now);

   // print various componets of tm stucture
   cout << "Year: "<< 1900 + ltm->tm_year<<endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: " << ltm->tm_mday<< endl;
   cout << "Time: " << 5 + ltm->tm_hour << ":";
   cout << 30 + ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
 
}