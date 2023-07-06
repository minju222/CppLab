#include <iostream>
#include <cstring>
#include <string>
#include "Book.h"

Book::Book() {};
Book::Book(const char* name, int price
	, const char* author, const char* publisher) {
	strcpy(this->name, name);
	this->price = price;
	strcpy(this->author, author);
	strcpy(this->publisher, publisher);
}

Book::~Book() {
	//delete[] name;
}
/*
	생성자,복사생성자, 소멸자, get and set ........
*/
void Book::setAuthor(char* author) {
	strcpy(this->author, author);
}
char* Book::getAuthor() {
	return author;
}

void Book::setName(char* name) {
	strcpy(this->name, name);
}
char* Book::getName() {
	return name;
}

int Book::getPrice() {
	return price;
}

void Book::setPrice(int price) {
	this->price = price;
}
void Book::setPublicsher(char* publisher) {
	strcpy(this->publisher, publisher);
}
char* Book::getPublisher() {
	return publisher;
}

void Book::printBook() {
	cout << name << "\t" << price << "\t" << author << "\t"
		<< publisher << endl;
}

