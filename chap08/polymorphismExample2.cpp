#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class First {
public:
	First() {}
	virtual ~First() {}
	virtual void print() {
		cout << "First" << endl;
	}
};

class Second: public First {
public:
	Second() {}
	virtual ~Second() {}
	void print() {
		cout << "Second" << endl;
	}
};

void print(First** pp, int len) {
	printf("%u %u %u %u %u\n", &pp, pp, pp[0], **pp, *pp[0]); // 1280 1336 6160 7088 7088
	for (int i = 0; i < len; i++) {
		pp[i]->print();
	}
}

int main() {
	First* fs[6];
	fs[0] = new First;
	//Second가 First를 상속받아서, First 배열을 Second까지 저장할 수 있다
	fs[1] = new Second; //== fs[1] = (First*)new Second;
	fs[2] = new Second;

	// First의 print가 가상 함수여서 객체의 실제 타입에 맞는 함수가 호출됨
	fs[0]->print();// first
	fs[1]->print();// second
	fs[2]->print();// second

	print(fs, 3); //first, second, second
	printf("%u %u %u %u %u %u\n", &fs, fs, &fs[0], fs[0], *fs, *fs[0]); // 1336 1336 1336 6160 6160 7088
	//delete fs 아님
	for (int i = 0; i < 3; i++) {
		delete fs[i];
	}

	return 0;
}
