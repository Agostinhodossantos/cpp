#include <iostream>

using namespace std;

int main() {
    char str[] = "Unable to read...";

    clog << "Error message : "<< str << endl; //is used to print log
    cerr << "Error message: " << str << endl; // use to print error 
    cout << "Error message: " << str << endl; // use to print message
}