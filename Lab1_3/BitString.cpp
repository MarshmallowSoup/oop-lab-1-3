///////////////////////////////////////////////////////////////////////////
// BitString.cpp
#include "BitString.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;




string BitString::getB()const
{
	string r, r1;

	long b1 = b;
	while (b1 != 0)
	{
		r += (b1 % 2 == 0 ? "0" : "1");
		b1 /= 2;
	}
	for (int i = r.size() - 1; i >= 0; i--)
		r1 += r[i];

	return r1;
}

string BitString::getA()const
{
	string r, r1;

	long a1 = a;
	while (a1 != 0)
	{
		r += (a1 % 2 == 0 ? "0" : "1");
		a1 /= 2;
	}
	for (int i = r.size() - 1; i >= 0; i--)
		r1 += r[i];

	return r1;
}
void BitString::setA(string value)
{
	long number = 0;
	
	int S = 0;
	

	for (int i = 0; i < value.size(); i++)
		if (value[i] == '0' || value[i] == '1')
			S += 1;
	if (S == value.size() && value.size() < 32)
	{
		for (int i = 0; i < value.size(); i++)
		{
			number *= 2;
			number += value[i] - '0';
		}
		a = number;
	}
	else
		setA(value);
}
void BitString::setB(string value)
{
	long number = 0;

	int S = 0;


	for (int i = 0; i < value.size(); i++)
		if (value[i] == '0' || value[i] == '1')
			S += 1;
	if (S == value.size() && value.size() < 32)
	{
		for (int i = 0; i < value.size(); i++)
		{
			number *= 2;
			number += value[i] - '0';
		}
		b = number;
	}
	else
		setA(value);
}
bool BitString::init(long a1, long b1)
{
	string val1 = to_string(a1);
	string val2 = to_string(b1);
    setA(val1);
    setB(val2);
    return true;
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
    do{
        cout << "First part =  "; cin >> x;
        cout << "Second part =  "; cin >> y;
    } while (!init(x, y));
}

void BitString::display()
{
    cout << endl;
    cout << "64 bit String: " << toString() << endl;
}

BitString Not(BitString obj)
{
	string a = obj.toString();
	string res;

	for (int i = a.size(); i >= 0; i--)
	{
		if (a[i] == '0')
			res += '1';
		else if (a[i] == '1')
			res += '0';
	}
	obj.setAB(res);
	return obj;
}

BitString Or(BitString obj1, BitString obj2)
{
	BitString res;
	string a = obj1.toString(), b = obj2.toString(), c;

	if (a.size() == b.size())
		for (int i = a.size(); i >= 0; i--)
		{
			if (a[i] == b[i] && b[i] == '0')
				c += '0';
			else
				c += '1';
		}
	else
		c += "Error";
	res.setAB(c);
	return res;
}

BitString And(BitString obj1, BitString obj2)
{
	BitString res;
	string a = obj1.toString(), b = obj2.toString(), c;
	if (a.size() == b.size())
		for (int i = a.size(); i >= 0; i--)
		{
			if (a[i] == b[i] && a[i] == '1')
				c += '1';
			else
				c += '0';
		}
	else
		c += "Error";
	res.setAB(c);
	return res;
}

