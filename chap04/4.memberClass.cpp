//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//
//class AA {
//public:
//	int a = 10;
//	AA() {}
//	AA(int a) : a(a) {}
//	void print() {
//		cout << a << endl;
//		cout << "AA class " << endl;
//	}
//};
//
//class BB {
//public:
//	AA& aa;
//	int b = 5;
//
//	//BB() {}
//	BB(AA& a, int b) :aa(a), b(b) {}
//	void print() {
//		aa.print();
//		cout << "BB class " << endl;
//	}
//};
//int main() {
//	AA aa(20);
//	//aa.a = 20;
//	aa.print();
//
//	BB bb(aa, 20);
//	/*bb.aa.print();
//	bb.aa = aa;*/
//	bb.aa.print();
//
//	printf("%u %u\n", &aa, &bb.aa);
//
//	AA a1(20);
//	AA a2(30);
//
//	printf("%u %u\n", &a1, &a2);
//
//	a1 = a2;
//	a1.print();
//
//	return 0;
//}