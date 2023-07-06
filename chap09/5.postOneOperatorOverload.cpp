//#include <iostream>
//using namespace std;
//// 후치 단항연산자 오버로드
//class Point {
//private :
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	// 맴버함수로
//	// 후치 단항연산자 
//	/*const Point& operator++(int) {
//		cout << "후치 맴버 operator++" << endl;
//		const Point tmp(this->x, this->y);
//		this->x += 1;
//		this->y += 1;
//		return tmp;
//	}*/
//	void print() const {
//		cout << this->x << "," << this->y << endl;;
//	}
//	friend const Point& operator++(Point& p, int);
//};
//// 전역함수로 후치증가 연산자를 구현
//const Point& operator++(Point& p, int) {
//	cout << "후치 전역 operator++" << endl;
//	const Point tmp(p.x, p.y);
//	p.x += 1;
//	p.y += 1;
//	return tmp;
//}
//
//int main() {
//	int a = 10;
//	//a++;
//	cout << a++ << endl;
//	Point p(10, 5);
//	
//	Point res = p++;
//	res.print();
//
//	return 0;
//}