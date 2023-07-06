

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include "Book.h"
#include "Magazine.h"
#include "BookManager.h"
int index = 0;
using namespace std;
void BookManager::insertBook() {

	string name;
	int price;
	string author;
	string publisher;
	int year;
	int month;

	cout << "1, 책입력, 2. 잡지입력" << endl;
	int menu;
	cin >> menu;
	if (menu == 1) {
		//books[index] = new Book();
		Book* b = new Book();
		cout << "책이름을 입력하세요" << endl;
		cin >> name;
		b->setName(name);
		cout << "책가격을 입력하세요" << endl;
		cin >> price;
		b->setPrice(price);
		cout << "책저자을 입력하세요" << endl;
		cin >> author;
		b->setAuthor(author);
		cout << "출판사를 입력하세요" << endl;
		cin >> publisher;
		b->setPublicsher(publisher);
		
		books.push_back(b);
		
		index++;
	}
	else {
		// 잡지입력코드 here
		Magazine* m = new Magazine();
		cout << "잡지 이름을 입력하세요" << endl;
		cin >> name;
		m->setName(name);
		cout << "잡지 가격을 입력하세요" << endl;
		cin >> price;
		m->setPrice(price);
		cout << "잡지 저자를 입력하세요" << endl;
		cin >> author;
		m->setAuthor(author);
		cout << "잡지 출판사를 입력하세요" << endl;
		cin >> publisher;
		m->setPublicsher(publisher);
		cout << "잡지 출간 년도를 입력하세요" << endl;
		cin >> year;
		m->setYear(year);
		cout << "잡지 출간 월을 입력하세요" << endl;
		cin >> month;
		m->setMonth(month);
		books.push_back(m);
		
		index++;
	}

}

void BookManager::printBook() {
	int i;

	vector<Book*>::iterator itr = books.begin();

	printf(" 번호 \t 책이름 \t 책가격 \t 책저자 \t 출판사 \t 년 \t 월\n");
	for (int i=0; itr != books.end(); itr++, i++) {
		cout << i + 1 << "\t\t";
		//books[i]->printBook();
		(*itr)->printBook();
	}
	
}

void BookManager::updateBook() {
	int i;
	string modiName;
	int modiPrice;
	string modiAuthor;
	string modiPublisher;

	cout << "수정할 책번호을 입력하세요" << endl;
	cin >> i;
	
	cout << "수정할 책이름을 입력하세요" << endl;
	cin >> modiName;
	cout << "수정할 책가격을 입력하세요" << endl;
	cin >> modiPrice;
	cout << "수정할 책저자을 입력하세요" << endl;
	cin >> modiAuthor;
	cout << "수정할 출판사를 입력하세요" << endl;
	cin >> modiPublisher;
	
	books[i - 1]->setName(modiName);
	books[i - 1]->setPrice(modiPrice);
	books[i - 1]->setAuthor(modiAuthor);
	books[i - 1]->setPublicsher(modiPublisher);
}

void BookManager::deleteBook() {
	int i;
	cout << "삭제할 책번호을 입력하세요" << endl;
	
	cin >> i;

	books[i - 1]->setName(books[index - 1]->getName());
	books[i - 1]->setPrice(books[index - 1]->getPrice());
	books[i - 1]->setAuthor(books[index - 1]->getAuthor());
	books[i - 1]->setPublicsher(books[index - 1]->getPublisher());

	delete books[index - 1];
	index--;

}

void BookManager::findBook() {
	int i;
	string findBook;
	cout << "검색할 책이름을 입력하세요" << endl;
	cin >> findBook;

	
	for (i = 0; i < index; i++) {
		if (books[i]->getName() == findBook) {
			cout << "  책이름 \t\t 책가격 \t\t 책저자 \t\t 출판사" << endl;
			cout << i + 1 << "\t\t";
			books[i]->printBook();
		}
	}
}


void BookManager::freeBooks() {
	int i;
	for (i = 0; i < index; i++) {
		delete books[i];
	}
}

void BookManager::loadFromFile() {
	ifstream ifs;
	ifs.open("book.txt", ios::in);
	if (ifs.fail()) {
		cout << "file 열기 실패" << endl;
		return;
	}
	string name;
	int price;
	string author;
	string publisher;
	do  {
		ifs >> name >> price >> author >> publisher;
		if (!ifs.eof()) {
			Book* pb = new Book(name, price, author, publisher);
			books.push_back(pb);
			index++;
		}
	} while (!ifs.eof());
	ifs.close();
}

void BookManager::saveToFile() {
	int i;

	ofstream ofs;
	ofs.open("book.txt", ios::out);
	if (ofs.fail()) {
		cerr << "file 열기 실패" << endl;
		return;
	}
	for (i = 0; i < index; i++) {
		ofs << books[i]->getName() << " " << books[i]->getPrice() << " " <<
			books[i]->getAuthor() << " " << books[i]->getPublisher()<< endl;
	}

	ofs.close();
}

