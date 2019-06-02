#include <iostream>
#ifndef FRACTION_H
#define FRACTION_H
using namespace std;

class Fraction
{
private:

	int num, denum;

public:

	Fraction(int x, int y)
	{
		num = x;
		denum = y;
	}

	friend ostream& operator<< (ostream &out, Fraction f);
	friend istream& operator>> (istream &in, Fraction &f);
	bool operator == (Fraction f2);
	bool operator != (Fraction f2);
	bool operator > (Fraction f2);
	bool operator < (Fraction f2);
	bool operator >= (Fraction f2);
	bool operator <= (Fraction f2);
	Fraction operator*  (Fraction f2);
	Fraction operator*   (int scalar);
	Fraction operator/  (Fraction f2);
	Fraction operator/  (int scalar);
	Fraction operator- (Fraction f2);
	Fraction operator+ (Fraction f2);
	void reduce();

};
#endif // FRACTION_H
