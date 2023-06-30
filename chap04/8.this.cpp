#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
/*
	this: �ڱ� ��ü�� ����Ű�� ����Ʈ ����
	�ٸ� ���� ��� : this�� �Լ� �ȿ��� ���Ǿ�����,
					 �� �Լ��� �������ִ� ��ü�� this



*/

//�Ҹ���
class S1 {
public:
	void print() {
		cout << this << endl; //S1�� ������ ��ü�� �ּ�
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
	//�Ҹ���
	~Sample() {
		//cout << "destructor" << endl;
	}

	void print() const {
		cout << this << endl; //Sample s ������ �ִ� ���� �ּ�
		printf("%u\n", this); //0x01 s�� ���� �ּҸ� ����
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