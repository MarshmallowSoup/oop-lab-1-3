///////////////////////////////////////////////////////////////////////////
// BitString.cpp
#include "BitString.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

void BitString::init(long a1, long b1)
{
	setA(a1);
	setB(b1);
}

string BitString::toString()
{
    stringstream sout;
    sout << to_string(a) << to_string(b);
    return sout.str();
}

void BitString::read()
{
    int x, y;
    
    cout << "First part =  "; cin >> x;
    cout << "Second part =  "; cin >> y;
	init(x, y);
    
}

void BitString::display()
{
	cout << endl;
	cout << "First part =  " << getA() << endl;
	cout << "Second part =  " << getB() << endl;
	cout << endl;
}

BitString Not(BitString obj)
{
	BitString res;
	res.a = ~obj.a;
	res.b = ~obj.b;
	return res;
}

BitString Or(BitString obj1, BitString obj2)
{
	BitString res;
	res.a = obj1.a | obj2.a;
	res.b = obj1.b | obj2.b;
	return res;
}
BitString And(BitString obj1, BitString obj2)
{
	BitString res;
	res.a = obj1.a & obj2.a;
	res.b = obj1.b & obj2.b;
	return res;
}

