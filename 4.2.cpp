// 4.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


class mySet
{
	char c;
	double b;
public:
	mySet (char c, double b)
	{
		c= _c;
		b= _b;
	}
	mySet(char c)
	{
		c= a.c;
	}
	mySet(double b);
	{
		b= a.b;
	}
	mySet operator+ (mySet& char c)
	{
		mySet char d(char c + char a.c);
		return d;
	}
	mySet operator+ (mySet& double b)
	{
		mySet double e(double b + double a.b);
		return e;
	}
	mySet operator- (mySet& char c)
	{
		mySet char f(char c - char a.c);
		return f;
	}
	mySet operator- (mySet& double b)
	{
		mySet double g(double b - double a.b);
		return g;
	}
	mySet operator* (mySet& char c)
	{
		mySet char h(char c * char a.c);
		return h;
	}
	mySet operaor* (mySet& double b)
	{
		mySet double l(double b * double a.b);
		return l;
	}
	friend ostream& operator<< (ostream& os, mySet char c);
	friend istream& operator>> (istream& is, mySet char c);
	friend ostream& operator<< (ostream& os, mySet double b);
	friend istream& operator>> (istream& is, mySet double b);
}


ostream& operator<< ( ostream& os, mySet char c)
{
	os << {a.c}
	return os;
}
istream& operator>> ( istream& is, char c)
{
	is >> a.c;
	return is;
}

ostream& operator<< ( ostream& os, mySet double b)
{
	os << {a.b}
	return os;
}
istream& operator>> ( istream& is, double b)
{
	is >> a.b;
	return is;
}


int main() 

{

mySet a, b, c, d, e, g, h, l; 

cout << "Vedit c " << endl;

cin >> a; 

cout << "Vedit  b: " << endl;

cin >> b; 


cout << "Rezultat x: "<< c << endl;

return 0;

}
