// 3.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream"
#include "iostream"
using namespace std;


int main()
{
	char a[256] , b[256], c[256], d[256];
	ofstream bot;
	bot.open("d:/debug/inf.txt");
	cout<< "ЧИ це велика тварина?";
		cin>> a;
	bot<<a <<endl;
	cout<<"Чи мешкає ця тварина в нашій країні?";
		cin>> b;
	bot<< b <<endl;
	cout<<"Чи це сухопутна тварина?";
		cin>> c;
	bot<< c;

	return 0;
}

