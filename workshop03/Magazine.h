#pragma once
#include "Book.h"
class Magazine : public Book{
private :
	int year;
	int month;
public:
	Magazine();
	Magazine(const char* name
		, int price
		, const char* author
		, const char* publisher
		, int year
		, int month);
	void setMonth(int month);
	int getMonth() const;
	void setYear(int year);
	int getYear()const;
	virtual void printBook();
};

