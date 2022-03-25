///////////////////////////////////////////////////////////////////////////
// BitString.h
#include <iostream>
#include <string>
#pragma once

using namespace std;

class BitString
{
private:
	long a;
	long b;
	string ab;
public:
	string getA() const;
	string getB() const;
	void setA(string a_1);
	void setB(string a_1);
	string getAB() { return ab; }
	void setAB(string value) { ab = value; }
	bool init(long a1, long b1);
	string toString();
	void read();
	void display();
	
	friend BitString Not(BitString obj);
	friend BitString Or(BitString obj1, BitString obj2);
	friend BitString And(BitString obj1, BitString obj2);
};



