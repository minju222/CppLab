#include <iostream>
#include <cstring>
#include <cstdlib>

#include "Book.h"
#include "Magazine.h"
#include "lib.h"

int index = 0;

using namespace std;

void insertBook(Book** books) {
	
	char name[50];
	int price;
	char author[50];
	char publisher[50];
	int year;
	int month;

	cout << "1, å�Է�, 2. �����Է�" << endl;
	int menu;
	cin >> menu;
	if (menu == 1) {
		books[index] = new Book();

		cout << "å�̸��� �Է��ϼ���" << endl;
		cin >> name;
		books[index]->setName(name);
		printf("å������ �Է��ϼ���\n");
		cin >> price;
		books[index]->setPrice(price);
		printf("å������ �Է��ϼ���\n");
		cin >> author;
		books[index]->setAuthor(author);
		printf("���ǻ縦 �Է��ϼ���\n");

		cin >> publisher;
		books[index]->setPublicsher(publisher);
		index++;
	}
	else {
		// �����Է��ڵ� here
		Magazine* m = new Magazine();
		cout << "���� �̸��� �Է��ϼ���" << endl;
		cin >> name;
		m->setName(name);
		printf("���� ������ �Է��ϼ���\n");
		cin >> price;
		m->setPrice(price);
		printf("���� ���ڸ� �Է��ϼ���\n");
		cin >> author;
		m->setAuthor(author);
		printf("���� ���ǻ縦 �Է��ϼ���\n");
		cin >> publisher;
		m->setPublicsher(publisher);
		printf("���� �Ⱓ �⵵�� �Է��ϼ���\n");
		cin >> year;
		m->setYear(year);
		printf("���� �Ⱓ ���� �Է��ϼ���\n");
		cin >> month;
		m->setMonth(month);
		books[index] = m;
		index++;
	}
	
}

void printBook(Book** books) {
	int i;

	printf(" ��ȣ \t å�̸� \t å���� \t å���� \t ���ǻ� \t �� \t ��\n");
	for (i = 0; i < index; i++) {
		cout << i + 1<<"\t";
		books[i]->printBook();
	}
}

void updateBook(Book** books) {
	int i;
	char modiName[50];
	int modiPrice;
	char modiAuthor[50];
	char modiPublisher[50];

	printf("������ å��ȣ�� �Է��ϼ���\n");
	fflush(stdout);
	scanf("%d", &i);
	printf("������ å�̸��� �Է��ϼ���\n");
	fflush(stdout);
	scanf("%s", modiName);
	printf("������ å������ �Է��ϼ���\n");
	fflush(stdout);
	scanf("%d", &modiPrice);
	printf("������ å������ �Է��ϼ���\n");
	fflush(stdout);
	scanf("%s", modiAuthor);
	printf("������ ���ǻ縦 �Է��ϼ���\n");
	fflush(stdout);
	scanf("%s", modiPublisher);

	books[i - 1]->setName(modiName);
	books[i - 1]->setPrice(modiPrice);
	books[i - 1]->setAuthor(modiAuthor);
	books[i - 1]->setPublicsher(modiPublisher);
}

void deleteBook(Book** books) {
	int i;
	printf("������ å��ȣ�� �Է��ϼ���\n");
	fflush(stdout);
	scanf("%d", &i);

	books[i - 1]->setName(books[index - 1]->getName());
	books[i - 1]->setPrice(books[index - 1]->getPrice());
	books[i - 1]->setAuthor(books[index - 1]->getAuthor());
	books[i - 1]->setPublicsher(books[index - 1]->getPublisher());

	delete books[index - 1];
	index--;

}

void findBook(Book** books) {
	int i;
	char findBook[50];
	printf("�˻��� å�̸��� �Է��ϼ���\n");
	fflush(stdout);
	scanf("%s", findBook);
	for (i = 0; i < index; i++) {
		if (!strcmp(books[i]->getName(), findBook)) {
			cout << "  å�̸� \t\t å���� \t\t å���� \t\t ���ǻ�" << endl;
			cout << i + 1 << ", " << books[i]->getName() << ", " <<
				books[i]->getPrice() << ", " << books[i]->getAuthor() << ", "
				<< books[i]->getPublisher() << endl;

		}
	}

}

void freeBooks(Book** books) {
	int i;
	for (i = 0; i < index; i++) {
		delete books[i];
	}
}

void loadFromFile(Book** books) {
	int res = 0;

	FILE* fd = fopen("book.txt", "r");
	if (fd == NULL) {
		printf("File �б� ����\n");
		return;
	}

	while (1) {
		char name[50];
		int price;
		char author[50];
		char publisher[50];
		Book* pb = new Book();
		res = fscanf(fd, "%s %d %s %s", name, &price,
			author, publisher);
		if (res == EOF) {
			break;
		}
		pb->setName(name);
		pb->setPrice(price);
		pb->setAuthor(author);
		pb->setPublicsher(publisher);
		books[index] = pb;
		index++;
	}
	fclose(fd);
}



void saveToFile(Book** books) {
	int i;

	FILE* fd = fopen("book.txt", "w");
	if (fd == NULL) {
		printf("File ���� ����\n");
		return;
	}
	for (i = 0; i < index; i++) {
		fprintf(fd, "%s %d %s %s\n", books[i]->getName(), books[i]->getPrice(),
			books[i]->getAuthor(), books[i]->getPublisher());
	}
	

	fclose(fd);
}
