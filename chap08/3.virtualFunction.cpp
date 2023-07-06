//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//
//using namespace std;
//
//class First {
//public:
//	// 함수에 virtual 가 붙으면 
//	// 마지막으로 오버라이드된 메소드가 실행됩니다
//	// 가상함수
//	virtual void print() {
//		cout << "First " << endl;
//	}
//};
//class Second : public First {
//public:
//	virtual void print() {
//		cout << "Second " << endl;
//	}
//};
//
//class Third : public Second {
//public:
//	void print() {
//		cout << "Third " << endl;
//	}
//};
//
//int main() {
//	First* f1 = new Third;
//	Second* s1 = new Third;
//	Third* t1 = new Third;
//	// 맴버함수 오버라이딩의 동적바인딩
//	f1->print();
//	s1->print();
//	t1->print();
//
//	delete f1;
//	delete s1;
//	delete t1;
//	return 0;
//}