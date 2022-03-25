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

	
	
	BitString resNOT1 = Not(b1);
	BitString resNOT2 = Not(b2);
	BitString resOR = Or(b1, b2);
	BitString resAND = And(b1, b2);
	
	cout << "!(first object) = " << resNOT1.getAB() << endl;
	cout << "!(second object) = " << resNOT2.getAB() << endl;
	cout << "(first object) | (second object) = " << resOR.getAB() << endl;
	cout << "(first object) | (second object)= " << resAND.getAB() << endl;

	
	return 0;
}