#include <iostream>
#include <fstream>
#include "Fraction.h"


using namespace std;

int main() {
	Fraction a(5, 14);
	Fraction b(3, 35);
	Fraction c(1, 4);
	Fraction d(1, 4);
	Fraction e(1, 2);
	(a / b).getProperFraction();
	(e + 5).toString();
	//( c - d).toString();

	ofstream fout("output.txt");
	fout << a << endl;
}