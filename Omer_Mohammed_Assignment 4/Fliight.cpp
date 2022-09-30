#include "Flight.h"
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // 

void Flight::setEconomy(int e) {
	if (e >= 1 && e <= 400) economy = e;
}
void Flight::setBusiness(int b) {
	if (b >= 1 && b <= 700) business = b;
}
void Flight::setFirst(int f) {
	if (f >= 1 && f <= 1000) first = f;
}
int Flight::getEconomy() const {
	return economy;
}
int Flight::getBusiness() const {
	return business;
}
int Flight::getFirst() const {
	return first;
}
float Flight::getFlight() const {
	return (economy + business + first ) / 4.0;
}
bool Flight:: operator==(const Flight& obj) const {
	return economy == obj.economy && business == obj.economy && first == obj.first;
}

Flight Flight:: operator+(const Flight& obj) const {
	Flight temp;
	temp.economy = this->economy + obj.economy;
	temp.business = this->business + obj.business;
	temp.first = this->first + obj.first;
	temp.total = temp.economy + temp.business + temp.first;
	return temp;
}
ostream& operator<<(ostream& os, const Flight& obj2) {
	os << "(" << obj2.economy<< "," << obj2.business << "," << obj2.first << ")";
	return os;
}
Flight::Flight() {
	economy = 1;
	business = 1;
	first = 1;
}
Flight::Flight(int a0, int a1, int a2) {
	economy = a0;
	business = a1;
	first = a2;
}
Flight::~Flight() {
	cout << "Flight object has been removed" << endl;
}
