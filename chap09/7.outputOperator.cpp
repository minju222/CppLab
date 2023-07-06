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
//
//	friend ostream& operator<<(ostream& os, Point& p);
//};
//
//ostream& operator<<(ostream& os, Point& p) {
//	os << "[ x = " << p.x << ", y = " << p.y <<" ]" << endl;
//	return os;
//}
//
//int main() {
//	Point p(10, 5);
//	//p.print();
//	Point p1(11, 6);
//	cout << p << p1 << endl;
//	
//	return 0;
//}