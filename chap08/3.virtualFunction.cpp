//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//
//using namespace std;
//
//class First {
//public:
//	// �Լ��� virtual �� ������ 
//	// ���������� �������̵�� �޼ҵ尡 ����˴ϴ�
//	// �����Լ�
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
//	// �ɹ��Լ� �������̵��� �������ε�
//	f1->print();
//	s1->print();
//	t1->print();
//
//	delete f1;
//	delete s1;
//	delete t1;
//	return 0;
//}