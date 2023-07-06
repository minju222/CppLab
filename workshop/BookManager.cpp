

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

	cout << "1, å�Է�, 2. �����Է�" << endl;
	int menu;
	cin >> menu;
	if (menu == 1) {
		//books[index] = new Book();
		Book* b = new Book();
		cout << "å�̸��� �Է��ϼ���" << endl;
		cin >> name;
		b->setName(name);
		cout << "å������ �Է��ϼ���" << endl;
		cin >> price;
		b->setPrice(price);
		cout << "å������ �Է��ϼ���" << endl;
		cin >> author;
		b->setAuthor(author);
		cout << "���ǻ縦 �Է��ϼ���" << endl;
		cin >> publisher;
		b->setPublicsher(publisher);
		
		books.push_back(b);
		
		index++;
	}
	else {
		// �����Է��ڵ� here
		Magazine* m = new Magazine();
		cout << "���� �̸��� �Է��ϼ���" << endl;
		cin >> name;
		m->setName(name);
		cout << "���� ������ �Է��ϼ���" << endl;
		cin >> price;
		m->setPrice(price);
		cout << "���� ���ڸ� �Է��ϼ���" << endl;
		cin >> author;
		m->setAuthor(author);
		cout << "���� ���ǻ縦 �Է��ϼ���" << endl;
		cin >> publisher;
		m->setPublicsher(publisher);
		cout << "���� �Ⱓ �⵵�� �Է��ϼ���" << endl;
		cin >> year;
		m->setYear(year);
		cout << "���� �Ⱓ ���� �Է��ϼ���" << endl;
		cin >> month;
		m->setMonth(month);
		books.push_back(m);
		
		index++;
	}

}

void BookManager::printBook() {
	int i;

	vector<Book*>::iterator itr = books.begin();

	printf(" ��ȣ \t å�̸� \t å���� \t å���� \t ���ǻ� \t �� \t ��\n");
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

	cout << "������ å��ȣ�� �Է��ϼ���" << endl;
	cin >> i;
	
	cout << "������ å�̸��� �Է��ϼ���" << endl;
	cin >> modiName;
	cout << "������ å������ �Է��ϼ���" << endl;
	cin >> modiPrice;
	cout << "������ å������ �Է��ϼ���" << endl;
	cin >> modiAuthor;
	cout << "������ ���ǻ縦 �Է��ϼ���" << endl;
	cin >> modiPublisher;
	
	books[i - 1]->setName(modiName);
	books[i - 1]->setPrice(modiPrice);
	books[i - 1]->setAuthor(modiAuthor);
	books[i - 1]->setPublicsher(modiPublisher);
}

void BookManager::deleteBook() {
	int i;
	cout << "������ å��ȣ�� �Է��ϼ���" << endl;
	
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
	cout << "�˻��� å�̸��� �Է��ϼ���" << endl;
	cin >> findBook;

	
	for (i = 0; i < index; i++) {
		if (books[i]->getName() == findBook) {
			cout << "  å�̸� \t\t å���� \t\t å���� \t\t ���ǻ�" << endl;
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
		cout << "file ���� ����" << endl;
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
		cerr << "file ���� ����" << endl;
		return;
	}
	for (i = 0; i < index; i++) {
		ofs << books[i]->getName() << " " << books[i]->getPrice() << " " <<
			books[i]->getAuthor() << " " << books[i]->getPublisher()<< endl;
	}

	ofs.close();
}

