#include "Fraction.h"

ostream& operator<< (ostream &out, Fraction f)
{
	if (f.denum == 0)
	{
		cout << "impossible to divide by zero" << endl;
	}
	else if (f.denum == 1)
	{
		out << f.num << endl;
		return out;
	}
	else if (f.num == f.denum)
	{
		out << 1;
		return out;
	}
	else
	{
		out << f.num << "/" << f.denum << endl;
		return out;
	}
};

istream& operator>> (istream &in, Fraction &f)
{
	int x, y;
	cout << "enter numerator :" << endl;
	in >> x;
	f.num = x;
	cout << "enter denuminator :" << endl;
start:
	in >> y;
	if (y == 0)
	{
		cout << "enter a denuminator other than 0" << endl;
		goto start;
	}
	else
	{
		f.denum = y;
	}
	return in;
};


bool Fraction :: operator== (Fraction f2)
{
	if (this->num != f2.num)
	{
		return false;
	}
	else if (this->denum != f2.denum)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool Fraction :: operator!= (Fraction f2)
{
	if (this->num != f2.num)
	{
		return true;
	}
	else if (this->denum != f2.denum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Fraction Fraction :: operator*  (Fraction f2)
{
	Fraction prod(1, 1);
	prod.num = (this->num*f2.num);
	prod.denum = (this->denum*f2.denum);
	return prod;

};

Fraction Fraction :: operator*  (int scalar)
{
	Fraction prod(1, 1);
	prod.num = (this->num*scalar);
	prod.denum = (this->denum);
	return prod;

};

Fraction Fraction :: operator/  (Fraction f2)
{
	Fraction dividened(1, 1);
	dividened.num = (this->num*f2.denum);
	dividened.denum = (this->denum*f2.num);
	return dividened;

};


Fraction Fraction :: operator/  (int scalar)
{
	Fraction dividened(1, 1);
	dividened.num = this->num;
	dividened.denum = (this->denum*scalar);
	return dividened;

};


Fraction Fraction :: operator- (Fraction f2)
{
	Fraction diff(1, 1);
	if (this->denum == f2.denum)
	{
		diff.denum = this->denum;
		diff.num = (this->num - f2.num);
		return diff;
	}
	else
	{
		diff.denum = this->denum*f2.denum;
		diff.num = ((this->num*f2.denum) - (f2.num*this->denum));
		return diff;
	}
};


Fraction Fraction :: operator+ (Fraction f2)
{
	Fraction sum(1, 1);
	if (this->denum == f2.denum)
	{
		sum.denum = this->denum;
		sum.num = (this->num + f2.num);
		return sum;
	}
	else
	{
		sum.denum = this->denum*f2.denum;
		sum.num = ((this->num*f2.denum) + (f2.num*this->denum));
		return sum;
	}
};


void Fraction::reduce()
{
	if (this->num <= this->denum)
	{
		for (int i = num; i>0; i--)
		{
			if ((this->num % i == 0) && (this->denum %i == 0))
			{
				this->num = this->num / i;
				this->denum = this->denum / i;
				break;
			}
		}
	}
	if (this->num >= this->denum)
	{
		for (int i = denum; i>0; i--)
		{
			if (this->num % i == 0 && this->denum % i == 0)
			{
				this->num = this->num / i;
				this->denum = this->denum / i;
				break;
			}
		}
	}
}

bool Fraction :: operator > (Fraction f2)
{
	double x1, x2;
	x1 = (this->num*1.0) / (this->denum*1.0);
	x2 = (f2.num*1.0) / (f2.denum*1.0);
	if ((this->denum == f2.denum && (this->num)>f2.num) || (x1 > x2)) {
		cout << *this << " is larger than " << f2 << endl;
		return true;
	}
	else if ((this->num == f2.num && this->denum == f2.denum) || (x1 == x2)) {
		cout << *this << " is not larger than " << f2 << endl;
		return false;
	}
	else {
		cout << *this << " is not larger than " << f2 << endl;
		return false;
	}
};


bool Fraction :: operator < (Fraction f2)
{	double x1, x2;
	x1 = (this->num*1.0) / (this->denum*1.0);
	x2 = (f2.num*1.0) / (f2.denum*1.0);
	if ((this->denum == f2.denum && (this->num)<f2.num) || (x1 < x2)) {
		cout << *this << " is smaller than " << f2 << endl;
		return true;
	}
	else if ((this->num == f2.num && this->denum == f2.denum)|| (x1 == x2)) {
		cout << *this << " is not smaller than " << f2 << endl;
		return false;
	}
	else {
		cout << *this << " is not smaller than " << f2 << endl;
		return false;
	}
};

bool Fraction :: operator >=(Fraction f2)
{
	double x1, x2;
	x1 = (this->num*1.0) / (this->denum*1.0);
	x2 = (f2.num*1.0) / (f2.denum*1.0);
	if ((this->denum == f2.denum && (this->num)>f2.num) || (x1 > x2)) {
		cout << *this << " is greater than " << f2 << endl;
		return true;
	}
	else if (((this->num == f2.num) && (f2.denum == this->denum)) || (x1 == x2)) {
		cout << *this << " is equal to " << f2 << endl;
		return true;
	}
	else {
		cout << *this << " is neither greater than nor equal to " << f2 << endl;
		return false;
	}
}


bool Fraction :: operator <= (Fraction f2)
{
	double x1, x2;
	x1 = (this->num*1.0) / (this->denum*1.0);
	x2 = (f2.num*1.0) / (f2.denum*1.0);
	if ((this->denum == f2.denum && (this->num)<f2.num) || (x1 < x2)) {
		cout << *this << " is smaller than " << f2 << endl;
		return true;
	}
	else if ((this->num == f2.num) && (f2.denum == this->denum)|| (x1 == x2)) {
		cout << *this << " is equal to " << f2 << endl;
		return true;
	}
	else {
		cout << *this << " is neither smaller than nor equal to " << f2 << endl;
		return false;
	}
}