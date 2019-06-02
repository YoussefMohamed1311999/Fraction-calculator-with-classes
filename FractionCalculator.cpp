#include "FractionCalculator.h"
#include <iostream>
using namespace std;

int choice;
Fraction res(1,1);
char c;

FractionCalculator::FractionCalculator()
{
	cout << " welcome to the fraction calculator. choose what you want to do." << endl;
start:
	cout << " 1- enter a fraction \n 2-add two fractions \n 3-subtract two fractions \n 4-multiply two fractions \n 5-divide two fractions \n 6-get the larger of two fractions \n 7-get the smallest of two fractions \n 8-test if two fractions are equal \n 9-test if two fractions are not equal \n 10-test if a fraction is greater then or equal the other \n 11-test if a fraction is smaller than or equal another \n 0-exit the program" << endl;
	cin >> choice;
	if (choice == 1) {
		Fraction x(1, 1);
		char b;
		cin >> x;
		cout << "do you wanna reduce it Y/N:";
		cin >> b;
		if (b == 'y') {
			x.reduce();
			cout << x;
			goto start;
		}
		else if (b == 'n') {
			cout << x;
			goto start;
		}
	}
	if (choice == 2) {
		cout << "do you want to use the previous result y/n \n";
		cin >> c;
		if (c == 'y') {
			Fraction z(1, 1);
			cout << "enter the second fraction" << endl;
			cin >> z;
			Fraction sum = res + z;
			sum.reduce();
			cout << endl;
			cout << sum;
			goto start;
		}
		else if (c == 'n') {
			Fraction y(1, 1), z(1, 1);
			cout << "enter the first fraction" << endl;
			cin >> y;
			cout << "enter the second fraction" << endl;
			cin >> z;
			Fraction sum = y + z;
			sum.reduce();
			res = sum;
			cout << endl;
			cout << sum;
			res = sum;
			goto start;
		}
	}
	if (choice == 3) {
		cout << "do you want to use the previous result y/n \n";
		cin >> c;
		if (c == 'y') {
			Fraction z(1, 1);
			cout << "enter the second fraction" << endl;
			cin >> z;
			Fraction diff = res - z;
			diff.reduce();
			cout << endl;
			cout << diff;
			res = diff;
			goto start;
		}
		else if (c == 'n') {
			Fraction y(1, 1), z(1, 1);
			cout << "enter the first fraction" << endl;
			cin >> y;
			cout << "enter the second fraction" << endl;
			cin >> z;
			Fraction diff = y - z;
			diff.reduce();
			res = diff;
			cout << endl;
			cout << diff;
			goto start;
		}
	}
	if (choice == 4) {
		cout << "do you want to use the previous result y/n \n";
		cin >> c;
		if (c == 'y') {
			Fraction z(1, 1);
			cout << "enter the second fraction" << endl;
			cin >> z;
			Fraction prod = res * z;
			prod.reduce();
			cout << endl;
			cout << prod;
			res = prod;
			goto start;
		}
		else if (c == 'n') {
			Fraction y(1, 1), z(1, 1);
			cout << "enter the first fraction" << endl;
			cin >> y;
			cout << "enter the second fraction" << endl;
			cin >> z;
			Fraction prod = y * z;
			prod.reduce();
			res = prod;
			cout << endl;
			cout << prod;
			goto start;
		}
	}
	if (choice == 5) {
		cout << "do you want to use the previous result y/n \n";
		cin >> c;
		if (c == 'y') {
			Fraction z(1, 1);
			cout << "enter the second fraction" << endl;
			cin >> z;
			Fraction div = res / z;
			div.reduce();
			cout << endl;
			cout << div;
			res = div;
			goto start;
		}
		else if (c == 'n') {
			Fraction y(1, 1), z(1, 1);
			cout << "enter the first fraction" << endl;
			cin >> y;
			cout << "enter the second fraction" << endl;
			cin >> z;
			Fraction div = y / z;
			div.reduce();
			res = div;
			cout << endl;
			cout << div;
			goto start;
		}
	}
	if (choice == 6) {
		cout << "do you want to use the previous result y/n \n";
		cin >> c;
		if (c == 'y') {
			Fraction z(1, 1);
			cout << "enter the second fraction" << endl;
			cin >> z;
			res > z;
			goto start;
		}
		else if (c == 'n') {
			Fraction y(1, 1), z(1, 1);
			cout << "enter the first fraction" << endl;
			cin >> y;
			cout << "enter the second fraction" << endl;
			cin >> z;
			y > z;
			goto start;
		}
		
	}
	if (choice == 7) {
		cout << "do you want to use the previous result y/n \n";
		cin >> c;
		if (c == 'y') {
			Fraction z(1, 1);
			cout << "enter the second fraction" << endl;
			cin >> z;
			res < z;
			goto start;
		}
		else if (c == 'n') {
			Fraction y(1, 1), z(1, 1);
			cout << "enter the first fraction" << endl;
			cin >> y;
			cout << "enter the second fraction" << endl;
			cin >> z;
			y < z;
			goto start;
		}
	}

	if (choice == 8) {
		cout << "do you want to use the previous result y/n \n";
		cin >> c;
		if (c == 'y') {
			Fraction z(1, 1);
			cout << "enter the second fraction" << endl;
			cin >> z;
			if (res == z) {
				cout << "equal \n";
			}
			else if (!(res == z)) {
				cout << "bot equal \n";
			}
			goto start;
		}
		else if (c == 'n') {

		Fraction y(1, 1), z(1, 1);
		cout << "enter the first fraction" << endl;
		cin >> y;
		cout << "enter the second fraction" << endl;
		cin >> z;
		if (y == z) {
			cout << "equal \n";
			}
		else if (!(y == z)) {
			cout << "not equal \n";
			}
		goto start;
		}

	}

	if (choice == 9) {
		cout << "do you want to use the previous result y/n \n";
		cin >> c;
		if (c == 'y') {
			Fraction z(1, 1);
			cout << "enter the second fraction" << endl;
			cin >> z;
			if (res != z) {
				cout << "not equal \n";
			}
			else if (!(res != z)) {
				cout << "equal \n";
			}
			goto start;
		}
		else if (c == 'n') {

			Fraction y(1, 1), z(1, 1);
			cout << "enter the first fraction" << endl;
			cin >> y;
			cout << "enter the second fraction" << endl;
			cin >> z;
			if (y != z) {
				cout << "not equal \n";
			}
			else if (!(y != z)) {
				cout << "equal \n";
			}
			goto start;
		}

	}

	if (choice == 10) {
		cout << "do you want to use the previous result y/n \n";
		cin >> c;
		if (c == 'y') {
			Fraction z(1, 1);
			cout << "enter the second fraction" << endl;
			cin >> z;
			res >= z;
			goto start;
		}
		else if (c == 'n') {
			Fraction y(1, 1), z(1, 1);
			cout << "enter the first fraction" << endl;
			cin >> y;
			cout << "enter the second fraction" << endl;
			cin >> z;
			y >= z;
			goto start;
		}
	}

	if (choice == 11) {
		cout << "do you want to use the previous result y/n \n";
		cin >> c;
		if (c == 'y') {
			Fraction z(1, 1);
			cout << "enter the second fraction" << endl;
			cin >> z;
			res <= z;
			goto start;
		}
		else if (c == 'n') {
			Fraction y(1, 1), z(1, 1);
			cout << "enter the first fraction" << endl;
			cin >> y;
			cout << "enter the second fraction" << endl;
			cin >> z;
			y <= z;
			goto start;
		}
	}
	if (choice == 0) {
		exit;
	}

}