#include <iostream>

namespace AA {
	namespace BB {
		namespace CC {
			int a;
			void func1();
		}
	}
}

using namespace std;

int main() {
	AA::BB::CC::a = 10;
	namespace ABC = AA::BB::CC;
	ABC::a = 20;
	ABC::func1();

	using AA::BB::CC::func1;

	func1();

	cout << "namespace" << endl;
}

void AA::BB::CC::func1() {

}