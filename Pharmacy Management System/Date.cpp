#include "Date.h"
Date::Date() {
	day_ = 0;
	month_ = 0;
	year_ = 0;
}
Date::Date(int d,int m,int y) {
	setDay(d);
	setMonth(m);
	setYear(y);
}
void Date::setDay(int d) {
	day_ = d;
}
void Date::setMonth(int m) {
	month_ = m;
}
void Date::setYear(int y) {
	year_ = y;
}
int Date::getDay() {
	return day_;
}
int Date::getMonth() {
	return month_;
}
int Date::getYear() {
	return year_;
}
void Date::printData() {
	cout << day_ << "/" << month_ << "/" << year_ << endl;
}