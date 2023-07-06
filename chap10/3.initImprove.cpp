#include <iostream>
using namespace std;

class First {
private :
	int num1, num2;
public:
	
	First(int num1 = 0, int num2 = 0) :num1(num1), num2(num2) {
		cout << "init ������" << endl;
	};

	First(First& s) :num1(s.num1), num2(s.num2) {
		cout << "���� ������" << endl;
	}

	First& operator=(const First& f) {
		cout << "First ���Կ�����" << endl;
		this->num1 = f.num1;
		this->num2 = f.num2;
		return *this;
	};

	void print() {
		cout << num1 << "," << num2 << endl;
	}
};

class Second {
private :
	First f;
public:
	Second(First& f) : f(f) {}
};

class Third{
private:
	First f;
public:
	Third(First& f)  {
		this->f = f;
	}
};

int main() {
	First f(1, 2); //init ������
	cout << "-----------------" << endl;
	Second s(f); //���� ������
	cout << "-----------------" << endl;
	Third t(f); //First ���Կ�����
	return 0;
}