//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//
////������ overLoad
//class Sample {
//public:
//	int a= 0, b= 0;
//	//constructor -> �ȸ����θ� �ڵ����� ������� -> default constructor
//	Sample() {
//		cout << " constructor" << endl;
//	}
//	Sample(int _a) {
//		cout << " _a constructor" << endl;
//	}
//	Sample(int _a, int _b) {
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
//	return 0;
//}