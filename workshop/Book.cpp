#include <iostream>
#include <cstring>
#include "Book.h"

Book::Book() {};
Book::Book(string name, int price
	, string author, string publisher)
	:name(name),price(price),author(author),publisher(publisher) {}

Book::~Book() {}
/*
	생성자,복사생성자, 소멸자, get and set ........
*/
void Book::setAuthor(string author) {
	this->author = author;
}
string Book::getAuthor() {
	return author;
}

void Book::setName(string name) {
	this->name = name;
}
string Book::getName() {
	return name;
}

int Book::getPrice() {
	return price;
}

void Book::setPrice(int price) {
	this->price = price;
}
void Book::setPublicsher(string publisher) {
	this->publisher = publisher;
}
string Book::getPublisher() {
	return publisher;
}

void Book::printBook() {
	cout << name << "\t" << price << "\t" << author << "\t"
		<< publisher << endl;
}


