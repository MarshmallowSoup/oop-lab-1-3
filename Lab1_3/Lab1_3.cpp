///////////////////////////////////////////////////////////////////////////
// lab1_3.cpp
#include <iostream>
#include "BitString.h"
#include <string>

using namespace std;

int main()
{	
	cout << "first object" << endl;
	BitString b1; // 1 variant
	b1.read();
	b1.display();
	cout << "second object" << endl;
	BitString b2; // 1 variant
	b2.read();
	b2.display();

	BitString NOT1 = Not(b1);
	BitString NOT2 = Not(b2);
	BitString OR = Or(b1, b2);
	BitString AND = And(b1, b2);

	cout << "!(first object) " << endl;
	NOT1.display();
	cout << "!(second object)" << endl;
	NOT2.display();
	cout << "(first object) | (second object)" << endl;
	OR.display();
	cout << "(first object) & (second object)" << endl;
	AND.display();
	
	return 0;
}