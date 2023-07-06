#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Book.h"
#include "Magazine.h"
#include "lib.h"

using namespace std;

int main() {
	Book* books[10];
	int menu = 0;
	loadFromFile(books);
	while (1) {
		cout << "1:목록, 2:도서명검색, 3:입력, 4:수정, 5:삭제, 0:종료" << endl;
		cin >> menu;
		switch (menu) {
		case 1:
			printBook(books);
			break;
		case 2:
			findBook(books);
			break;
		case 3:
			insertBook(books);
			break;
		case 4:
			updateBook(books);
			break;
		case 5:
			deleteBook(books);
			break;
		case 0:
			saveToFile(books);
			freeBooks(books);
			cout << "프로그램이 종료되었습니다." << endl;
			exit(0);
		default:
			break;
		}
	}
	return 0;
}