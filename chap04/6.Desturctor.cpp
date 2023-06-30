//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//
//
////소멸자
//
//class Sample {
//private:
//
//public:
//	int a = 0, b = 0;
//	char* name;
//	//consturctor
//	Sample(const char* _name){
//		int len = strlen(_name);
//		name = new char[len+1];
//		strcpy(name, _name);
//		cout << "constructor" << endl;
//	}
//	//소멸자
//	~Sample() {
//		delete[] name;
//		cout << "destructor" << endl;
//	}
//
//	void print() const {
//		cout << name << endl;
//	}
//};
//
//int main() {
//	//정적 선언(소멸자 호출 불필요)
//	Sample s1("hong");
//	cout << "정적선언" << endl;
//	s1.print();
//	////동적 선언(소멸자가 자동으로 실행 안됨) -> delete 해야함
//	//Sample* s2 = new Sample;
//	//cout << "동적선언" << endl;
//	//delete s2;
//
//	////임시적 선언(만들자 마자 실행되고 소멸, 소멸자 호출 불필요)
//	//Sample();
//	//cout << "임시적 선언 방식" << endl;
//
//	return 0;
//}