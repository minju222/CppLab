#pragma once
#include "Book.h"
class Magazine : public Book{
private :
	int year;
	int month;
public:
	Magazine();
	Magazine(string name
		, int price
		, string author
		, string publisher
		, int year
		, int month);
	virtual ~Magazine();
	void setMonth(int month);
	int getMonth() const;
	void setYear(int year);
	int getYear()const;
	virtual void printBook();
};

