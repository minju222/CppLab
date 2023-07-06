#include <iostream>
#include <cstring>
#include "Magazine.h"


Magazine::Magazine() {
	year = 0;
	month = 0;
}
Magazine::Magazine(string name
	, int price
	, string author
	, string publisher
	, int year
	, int month):Book(name, price, author, publisher), year(year), month(month) {}
Magazine::~Magazine() {};
void Magazine::setMonth(int month) {
	this->month = month;
}
int Magazine::getMonth() const {
	return this->month;
}

void Magazine::setYear(int year) {
	this->year = year;
}
int Magazine::getYear()const {
	return this->year;
}
void Magazine::printBook() {
	cout << name << "\t" << price << "\t" << author << "\t"
		<< publisher << "\t" << year << "\t" << month << endl;
}