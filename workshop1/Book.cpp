#include <iostream>
#include <cstdlib>
#include <cstring>

#include "Book.h"

int index = 0;

using namespace std;

void insertBook(Book** books) {
	char name[50];
	int price;
	char author[50];
	char publisher[50];

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

void printBook(Book** books) {
	int i;

	printf("  å�̸� \t\t å���� \t\t å���� \t\t ���ǻ� \n");
	for (i = 0; i < index; i++) {
		cout << i + 1 << ", " << books[i]->getName() << ", " <<
			books[i]->getPrice() << ", " << books[i]->getAuthor() << ", " 
			<< books[i]->getPublisher() << endl;
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

	/*strcpy(books[i - 1]->name, modiName);
	books[i - 1]->price = modiPrice;
	strcpy(books[i - 1]->author, modiAuthor);
	strcpy(books[i - 1]->publisher, modiPublisher);*/

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

	/*strcpy(books[i - 1]->name, books[index - 1]->name);
	books[i - 1]->price = books[index - 1]->price;
	strcpy(books[i - 1]->author, books[index - 1]->author);
	strcpy(books[i - 1]->publisher, books[index - 1]->publisher);*/


	books[i - 1]->setName(books[index - 1]->getName());
	books[i - 1]->setPrice(books[index - 1]->getPrice());
	books[i - 1]->setAuthor(books[index - 1]->getAuthor());
	books[i - 1]->setPublicsher(books[index - 1]->getPublisher());

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
