//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//
////생성자 overLoad
//class Sample {
//public:
//	int a = 0, b = 0;
//	//constructor -> 안만들어두면 자동으로 만들어짐 -> default constructor
//	Sample() {
//		cout << " constructor" << endl;
//	}
//	Sample(int _a): a(_a) { //멤버변수 a에 _a를 넣어줌
//		cout << " _a constructor" << endl;
//	}
//	Sample(int _a, int _b): a(_a), b(_b) {
//		cout << " _a _b constructor" << endl;
//	}
//	void print() const {
//		cout << a << ", " << b << endl;
//	}
//};
//
//int main() {
//	Sample s1; // constructor
//	s1.a = 10;
//	s1.b = 5;
//	s1.print();
//
//	Sample* s2 = new Sample(5); // _a constructor
//	s2->print();
//	delete s2;
//	return 0;
//}