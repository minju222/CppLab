//#include <iostream>
//
//using namespace std;
//// ��ü�� �ɹ��Լ������� ������ �����ε�
//
//class Point {
//private :
//	int x, y;
//public :
//	Point() {}
//	Point(int x=0, int y=0) :x(x), y(y) {}
//  // memberFunction

//	Point& operator+(Point& p) {
//		this->x += p.x;
//		this->y += p.y;
//		return *this;
//	}
//	void print() const{
//		cout << this->x << "," << this->y << endl;;
//	}
//};
//
//int main() {
//	Point p1(10, 5);
//	Point p2(5, 3);
//  // ��ü�� �ɹ��Լ� operator+
//	//Point& res = p1.operator+(p2);
//	Point& res = p1 + p2;
//	res.print();
//}