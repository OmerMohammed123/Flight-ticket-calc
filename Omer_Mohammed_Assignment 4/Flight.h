#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // 

class Flight {
	friend ostream& operator<<(ostream& os, const Flight& obj2);
private:
	int economy;
	int business;
	int first;
	int total;
public:
	void setEconomy(int e);
	void setBusiness(int b);
	void setFirst(int f);
	int getEconomy()const;
	int getBusiness()const;
	int getFirst()const;
	float getFlight() const;
	bool operator==(const Flight& obj) const;
	Flight operator+(const Flight& obj) const;
	Flight();
	Flight(int a0, int a1, int a2);
	~Flight();

};