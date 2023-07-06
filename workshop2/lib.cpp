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

	cout << "1, 책입력, 2. 잡지입력" << endl;
	int menu;
	cin >> menu;
	if (menu == 1) {
		books[index] = new Book();

		cout << "책이름을 입력하세요" << endl;
		cin >> name;
		books[index]->setName(name);
		printf("책가격을 입력하세요\n");
		cin >> price;
		books[index]->setPrice(price);
		printf("책저자을 입력하세요\n");
		cin >> author;
		books[index]->setAuthor(author);
		printf("출판사를 입력하세요\n");

		cin >> publisher;
		books[index]->setPublicsher(publisher);
		index++;
	}
	else {
		// 잡지입력코드 here
		Magazine* m = new Magazine();
		cout << "잡지 이름을 입력하세요" << endl;
		cin >> name;
		m->setName(name);
		printf("잡지 가격을 입력하세요\n");
		cin >> price;
		m->setPrice(price);
		printf("잡지 저자를 입력하세요\n");
		cin >> author;
		m->setAuthor(author);
		printf("잡지 출판사를 입력하세요\n");
		cin >> publisher;
		m->setPublicsher(publisher);
		printf("잡지 출간 년도를 입력하세요\n");
		cin >> year;
		m->setYear(year);
		printf("잡지 출간 월을 입력하세요\n");
		cin >> month;
		m->setMonth(month);
		books[index] = m;
		index++;
	}
	
}

void printBook(Book** books) {
	int i;

	printf(" 번호 \t 책이름 \t 책가격 \t 책저자 \t 출판사 \t 년 \t 월\n");
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

	printf("수정할 책번호을 입력하세요\n");
	fflush(stdout);
	scanf("%d", &i);
	printf("수정할 책이름을 입력하세요\n");
	fflush(stdout);
	scanf("%s", modiName);
	printf("수정할 책가격을 입력하세요\n");
	fflush(stdout);
	scanf("%d", &modiPrice);
	printf("수정할 책저자을 입력하세요\n");
	fflush(stdout);
	scanf("%s", modiAuthor);
	printf("수정할 출판사를 입력하세요\n");
	fflush(stdout);
	scanf("%s", modiPublisher);

	books[i - 1]->setName(modiName);
	books[i - 1]->setPrice(modiPrice);
	books[i - 1]->setAuthor(modiAuthor);
	books[i - 1]->setPublicsher(modiPublisher);
}

void deleteBook(Book** books) {
	int i;
	printf("삭제할 책번호을 입력하세요\n");
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
	printf("검색할 책이름을 입력하세요\n");
	fflush(stdout);
	scanf("%s", findBook);
	for (i = 0; i < index; i++) {
		if (!strcmp(books[i]->getName(), findBook)) {
			cout << "  책이름 \t\t 책가격 \t\t 책저자 \t\t 출판사" << endl;
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
		printf("File 읽기 실패\n");
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
		printf("File 쓰기 실패\n");
		return;
	}
	for (i = 0; i < index; i++) {
		fprintf(fd, "%s %d %s %s\n", books[i]->getName(), books[i]->getPrice(),
			books[i]->getAuthor(), books[i]->getPublisher());
	}
	

	fclose(fd);
}
