#pragma once
#include <vector>
#include "Book.h"
#include "Magazine.h"
using namespace std;
class BookManager
{
private :
	//Book* books[10];
	vector<Book*>books;
public :
	BookManager() {}
	virtual ~BookManager() {}
	void printBook();
	void insertBook();
	void updateBook();
	void deleteBook();
	void findBook();
	void loadFromFile();
	void saveToFile();
	void freeBooks();
};

