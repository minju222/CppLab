#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
// 다중상속 (다이아몬드상속의 문제점이 발생할수 있다)
//			 virtual 상속으로 해결

class Grand {
public:
	Grand() { cout << "Grand 생성자" << endl; }
	virtual ~Grand() { cout << "Grand 소멸자" << endl; }
	virtual void print() {}
};
class Father : virtual public Grand {
public:
	Father() { cout << "Father 생성자" << endl; }
	virtual ~Father() { cout << "Father 소멸자" << endl; }
};
class Mother : virtual public Grand {
public:
	Mother() { cout << "Mother 생성자" << endl; }
	virtual ~Mother() { cout << "Mother 소멸자" << endl; }
};
class Son : public Father, public Mother {
public :
	Son() { cout << "Son 생성자" << endl; }
	virtual ~Son() { cout << "Son 소멸자" << endl; }
};

int main() {
	Son s;
	return 0;
}