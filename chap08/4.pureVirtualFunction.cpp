//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//
//using namespace std;
//
//// ����Ŭ������ ����Ŭ������ �Ϲ�ȭ Ŭ�����̱� ������
//// �� ��üȭ�Ǿ� �ϴ°��� �ƴϴ�
//class First {
//public:
//	// ���� �����Լ�
//	virtual void print() = 0;
//};
//class Second : public First {
//public:
//	void print() {
//		cout << "Second " << endl;
//	}
//};
//class Third : public Second {
//public:
//	void print() {
//		cout << "Third " << endl;
//	}
//	
//};
//// ���������� ���� First ���� Ÿ����
//// First Ÿ������ ��ĳ�����ϰ� �ǰ�
//// virtual Ű���忡 ���� 
//// �Լ��� ������ ���������� �������̵��� �Լ��� ����ȴ�
//void printPoly(First* s) {
//	s->print();
//};
////void printPoly(Third* s) {
////	s->print();
////};
//
////      view (virtual onDraw)
//// button hr radio checkbox
///*
//	void draw(view v){
//		v.onDraw()
//	}
//*/
//
//int main() {
//	//First* f1 = new First;
//	//f1->print();
//	First* f2 = new Second;
//	//f2->print();
//	printPoly(f2);
//	First* f3 = new Third;
//	printPoly(f3);
//
//	return 0;
//}