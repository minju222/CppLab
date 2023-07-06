//#include <iostream>
//
//using namespace std;
//// 전치 단항연산자 오버로드
//class Point {
//private:
//	int x, y;
//public:
//	Point(int x=0, int y=0) :x(x), y(y) {}
//	void print() const {
//		cout << this->x << "," << this->y << endl;;
//	}
//	Point& operator++() {
//		cout << "operator++" << endl;
//		this->x += 1;
//		this->y += 1;
//		return *this;
//	}
//	// 맴버함수로.....
//	/*Point& operator--() {
//		cout << "member operator--" << endl;
//		this->x -= 1;
//		this->y -= 1;
//		return *this;
//	}*/
//	friend Point& operator--(Point& p);
//};
//
//// 전역함수로.....
//Point& operator--(Point& p) {
//	cout << "global operator--" << endl;
//	p.x -= 1;
//	p.y -= 1;
//	return p;
//}
//
//int main() {
//	int a = 10;
//	//++a;
//	cout << ++a << endl;
//	Point p(10, 5);
//	Point& res = ++p;
//	res.print();
//	res = --p;
//	res.print();
//
//	--(--p);
//	p.print();
//
//	res = ++(++p);
//	res.print();
//
//
//	return 0;
//}