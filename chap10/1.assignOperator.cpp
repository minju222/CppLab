//#include <iostream>
//using namespace std;
//
//class Point {
//private :
//	int num;
//	char* name;
//public:
//	Point(char* name, int num) {
//		name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		this->num = num;
//	}
//	Point(int num) :num(num) {
//		cout << "������" << endl;
//
//	};
//	Point(Point& s):num(s.num) {
//		cout << "���� ������" << endl;
//		name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		this->num = num;
//	};
//	Point& operator=(const Point& s) {
//		cout << "�⺻ ���Կ�����" << endl;
//		name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		this->num = s.num;
//		return *this;
//	}
//	virtual ~Point() {
//		delete[] name;
//	}
//	void print() {
//		cout << num << endl;
//	}
//};
//
//
//int main() {
//	Point a(10);
//	Point b=NULL;
//	b = a;
//	printf("%u %u\n", &a, &b);
//	b.print();
//	return 0;
//}