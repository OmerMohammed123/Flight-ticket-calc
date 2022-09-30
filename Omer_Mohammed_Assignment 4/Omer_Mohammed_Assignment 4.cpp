#include "Flight.h"
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // 

int main()
{
    Flight one(100,500,900);
    Flight two(250, 400, 850);
    Flight three;
    if (one == two) {
        cout << "The first and second flight are equal" << endl;
    }
    else {
        cout << "The first and second flight are not equal" << endl;
    }
    if (one == three) {
        cout << "The first and the third flight are equal" << endl;
    }
    else {
        cout << "The first and the third flight are not equal" << endl;
    }
    cout << endl;
    cout << "The total of the two flights are" << endl;
    Flight temp;
    temp = one + two;
    cout << "Economy: " << temp.getEconomy() << endl;
    cout << "Business: " << temp.getBusiness() << endl;
    cout<< "First: " << temp.getFirst() << endl;
    cout << endl;


}



