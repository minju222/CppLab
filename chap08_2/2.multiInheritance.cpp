#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
// ���߻�� (���̾Ƹ������ �������� �߻��Ҽ� �ִ�)
//			 virtual ������� �ذ�

class Grand {
public:
	Grand() { cout << "Grand ������" << endl; }
	virtual ~Grand() { cout << "Grand �Ҹ���" << endl; }
	virtual void print() {}
};
class Father : virtual public Grand {
public:
	Father() { cout << "Father ������" << endl; }
	virtual ~Father() { cout << "Father �Ҹ���" << endl; }
};
class Mother : virtual public Grand {
public:
	Mother() { cout << "Mother ������" << endl; }
	virtual ~Mother() { cout << "Mother �Ҹ���" << endl; }
};
class Son : public Father, public Mother {
public :
	Son() { cout << "Son ������" << endl; }
	virtual ~Son() { cout << "Son �Ҹ���" << endl; }
};

int main() {
	Son s;
	return 0;
}