#pragma once
#include<iostream>
using namespace std;
class Date
{
protected:
	int day_;
	int month_;
	int year_;
public:
	Date();
	Date(int, int, int);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay();
	int getMonth();
	int getYear();
	void printData();
};

