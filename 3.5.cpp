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
	cout<< "�� �� ������ �������?";
		cin>> a;
	bot<<a <<endl;
	cout<<"�� ����� �� ������� � ����� ����?";
		cin>> b;
	bot<< b <<endl;
	cout<<"�� �� ��������� �������?";
		cin>> c;
	bot<< c;

	return 0;
}

