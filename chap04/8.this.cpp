#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
/*
	this: 자기 객체를 가리키는 포인트 변수
	다른 이행 방식 : this는 함수 안에서 사용되어지고,
					 그 함수를 가지고있는 객체가 this



*/

//소멸자
class S1 {
public:
	void print() {
		cout << this << endl; //S1이 생성한 객체의 주소
	}
};
class Sample {
private:

public:
	int a = 3, b = 0;
	//consturctor
	S1* s;
	Sample() {
		//cout << "constructor" << endl;
	}
	//소멸자
	~Sample() {
		//cout << "destructor" << endl;
	}

	void print() const {
		cout << this << endl; //Sample s 변수가 있는 곳의 주소
		printf("%u\n", this); //0x01 s와 같은 주소를 가짐
		cout <<  (*this).a << endl;
		s->print();
		cout <<a << "  "<< b << endl;
	}

	Sample* aa() {
		cout << "aa" << endl;
		return this;
	}

	Sample* bb() {
		cout << "bb" << endl;
		return this;
	}

	Sample* cc() {
		cout << "cc" << endl;
		return this;
	}
};

int main() {
	Sample s;
	s.aa();
	s.bb();
	s.cc();

	Sample* ss = new Sample();
	ss->aa()->bb()->cc(); //aa bb cc
	return 0;
}