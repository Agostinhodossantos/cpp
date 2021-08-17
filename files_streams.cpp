#include <fstream>
#include <iostream>
using namespace std;

int main () {
    char data[100];

    ofstream outfile;
    outfile.open("afile.dat");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    // write inputted into the file
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    // again write inputted data into the file
    outfile << data << endl;

    // close the opened file
    outfile.close();
    
}






