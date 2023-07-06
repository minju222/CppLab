#pragma once
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class Book
{
private:
protected:
	/* option (��������� �ʿ�)*/
	//char* name;
	char name[50];
	int price;
	char author[50];
	char publisher[50];
public:
	Book() ;
	Book(const char* name, int price
		, const char* author, const char* publisher);
	
	virtual ~Book();
	/*
		������,���������, �Ҹ���, get and set ........
	*/
	void setAuthor(char* author);
	char* getAuthor();
	void setName(char* name);
	char* getName();
	int getPrice();
	void setPrice(int price);
	void setPublicsher(char* publisher);
	char* getPublisher();
	virtual void printBook();
};