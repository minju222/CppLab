//#include <iostream>
//
//using namespace std;
//// �����Լ� ������ �����ε�
//
//class Point {
//private:
//	int x, y;
//public:
//	Point() {}
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	
//	void print() const {
//		cout << this->x << "," << this->y << endl;;
//	}
//	friend Point& operator+(Point& p1, Point& p2);
//};
//// �����Լ� ������ + �����ڿ����ε� �Լ�
//Point& operator+(Point& p1, Point& p2) {
//	p1.x += p2.x;
//	p1.y += p2.y;
//	return p1;
//}
//
//int main() {
//	Point p1(10, 5);
//	Point p2(5, 3);
//
//	// �����Լ������� operator+() ����
//	//Point& res = operator+(p1 , p2);
//	Point& res = p1 + p2;
//	res.print();
//}