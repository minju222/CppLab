//#include <iostream>
//using namespace std;
//
//class First {
//private :
//	int num1, num2;
//public:
//	First(int num1=0, int num2=0) :num1(num1), num2(num2) {};
//
//	First& operator=(const First& f) {
//		cout << "First 대입연산자" << endl;
//		this->num1 = f.num1;
//		this->num2 = f.num2;
//		return *this;
//	};
//	void print() {
//		cout << num1 << "," << num2 << endl;
//	}
//};
//
//class Second : public First {
//private:
//	int num3, num4;
//public:
//	//Second() {};
//	Second(int num1=0, int num2=0, int num3 = 0, int num4 = 0) 
//		:First(num1,num2), num3(num3), num4(num4) {};
//
//	Second& operator=(const Second& f) {
//		cout << "Second 대입연산자" << endl;
//		// 상위 할당연산자 호출
//		First::operator=(f);
//		this->num3 = f.num3;
//		this->num4 = f.num4;
//		return *this;
//	};
//	void print() {
//		First::print();
//		cout << num3 << "," << num4 << endl;
//	}
//};
//// 대입연산자는 이미 생성된 객체에 객체를 이용하여 값을 넣으려고 할때
//// 호출됩니다
//// 
//int main() {
//	/*First f(1, 2);
//	First f1;
//	f1 = f;*/
//	//f.print();
//	
//	Second s(1, 2, 3, 4);
//	Second s1;
//	s1 = s;
//	s1.print();
//	return 0;
//}