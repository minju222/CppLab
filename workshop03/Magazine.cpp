#include <iostream>
#include <cstring>
#include "Magazine.h"


Magazine::Magazine() {
	year = 0;
	month = 0;
}
Magazine::Magazine(const char* name
	, int price
	, const char* author
	, const char* publisher
	, int year
	, int month) {
	strcpy(this->name, name);
	this->price = price;
	strcpy(this->author, author);
	strcpy(this->publisher, publisher);
	this->year = year;
	this->month = month;
}
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