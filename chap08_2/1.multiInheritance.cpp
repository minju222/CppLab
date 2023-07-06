//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//
//using namespace std;
//// 다중상속 (일반적인 객체지향언어중 c++ 에서만 지원한다 (모호성))
//		
//class Father {
//public:
//	virtual void print() {
//		cout << "Father" << endl;
//	}
//	
//};
//class Mother {
//public:
//	virtual void print() {
//		cout << "Mother" << endl;
//	}
//};
//class Son : public Father, public Mother {
//public :
//	virtual void print() {
//		Mother::print();
//		cout << "Son" << endl;
//	}
//};
//
//int main() {
//	/*Father* f = new Father();
//	f->print();
//	Mother* m = new Mother();
//	m->print();*/
//	Son* s = new Son;
//	s->print();
//	/*Father* f1 = new Son;
//	f1->print();
//	Mother* m1 = new Son;
//	m1->print();*/
//
//	/*delete f;
//	delete s;
//	delete f1;
//	delete m1;*/
//	return 0;
//}