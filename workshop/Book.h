#pragma once
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
class Book
{
private:
protected:
	string name;
	int price;
	string author;
	string publisher;
public:
	Book() ;
	Book(string name, int price
		, string author, string publisher);
	
	virtual ~Book();
	
	void setAuthor(string author);
	string getAuthor();
	void setName(string name);
	string getName();
	int getPrice();
	void setPrice(int price);
	void setPublicsher(string publisher);
	string getPublisher();
	virtual void printBook();

	
};