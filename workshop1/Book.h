#pragma once
class Book
{
private:
	/* option (복사생성자 필요)
	char* name;
	*/
	char name[50];
	int price;
	char author[50];
	char publisher[50];
public:
	
	/*
		생성자,복사생성자, 소멸자, get and set ........
	*/
	void setAuthor(char* author) {
		strcpy(this->author, author);
	}
	char* getAuthor() {
		return author;
	}

	void setName(char* name) {
		strcpy(this->name, name);
	}
	char* getName() {
		return name;
	}

	int getPrice() {
		return price;
	}

	void setPrice(int price) {
		this->price = price;
	}
	void setPublicsher(char* publisher) {
		strcpy(this->publisher, publisher);
	}
	char* getPublisher() {
		return publisher;
	}

	/*void printBook() {
		cout << name << ", " << price << ", " << author << ", "
			<< publisher << endl;
	}*/
};

void printBook(Book**);
void insertBook(Book**);
void updateBook(Book**);
void deleteBook(Book**);
void findBook(Book**);
void loadFromFile(Book**);
void saveToFile(Book**);
void freeBooks(Book**);

