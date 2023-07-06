//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//
//	void print() const {
//		cout << this->x << "," << this->y << endl;;
//	}
//	// 맴버함수 p * 3 operator *
//	/*Point& operator* (int a) {
//		this->x *= a;
//		this->y *= a;
//		return *this;
//	}*/
//	// 맴버함수 3 * p operator *
//	// 맴버함수로 3 * p 이런형태는 구현할수 없다
//	/*Point& operator*(int a, Point& p) {
//		p.x *= a;
//		p.y *= a;
//		return p;
//	}*/
//	friend Point& operator* (Point& p, int a);
//	friend Point& operator* (int a , Point& p);
//};
//
//// 전역함수 p * 3 operator *
//Point& operator* (Point&p, int a) {
//	p.x *= a;
//	p.y *= a;
//	return p;
//}
//// 전역함수 3 * p operator *
//Point& operator*(int a, Point& p) {
//	p.x *= a;
//	p.y *= a;
//	return p;
//}
//
//int main() {
//	Point p(10, 5);
//
//	/*p * 3;
//	p.print();
//	p = 3 * p;
//	p.print();*/
//
//	p = 3 * p * 3 * 3;
//	p.print();
//	return 0;
//}