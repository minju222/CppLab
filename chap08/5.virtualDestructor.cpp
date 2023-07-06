//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//// 가상소멸자
//class First {
//public:
//	char* str;
//	First() {
//		cout << "First Constructor" << endl;
//		//str = new char[strlen(str)];
//	}
//	virtual ~First() {
//		cout << "First Destructor" << endl;
//		//delete[] str;
//	}
//};
//class Second : public First{
//public:
//	char* addr;
//	Second() {
//		cout << "Second Constructor" << endl;
//		//addr = new char[strlen(addr)];
//	}
//	virtual ~Second() {
//		cout << "Second Destructor" << endl;
//		//delete[] addr;
//	}
//};
//
//int main() {
//	First* f = new First;
//	delete f;
//	cout << "-----------------------" << endl;
//	Second* s= new Second;
//	delete s;
//	cout << "-----------------------" << endl;
//	First* f1 = new Second;
//	delete f1;
//	return 0;
//}