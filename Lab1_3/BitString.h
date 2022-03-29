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
public:
	long getA() const { return a; };
	long getB() const { return b; };
	void setA(long value) { a = value; }
	void setB(long value) { b = value; }
	void init(long a1, long b1);
	string toString();
	void read();
	void display();
	
	friend BitString Not(BitString obj);
	friend BitString Or(BitString obj1, BitString obj2);
	friend BitString And(BitString obj1, BitString obj2);
};



