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
//	// �ɹ��Լ� p * 3 operator *
//	/*Point& operator* (int a) {
//		this->x *= a;
//		this->y *= a;
//		return *this;
//	}*/
//	// �ɹ��Լ� 3 * p operator *
//	// �ɹ��Լ��� 3 * p �̷����´� �����Ҽ� ����
//	/*Point& operator*(int a, Point& p) {
//		p.x *= a;
//		p.y *= a;
//		return p;
//	}*/
//	friend Point& operator* (Point& p, int a);
//	friend Point& operator* (int a , Point& p);
//};
//
//// �����Լ� p * 3 operator *
//Point& operator* (Point&p, int a) {
//	p.x *= a;
//	p.y *= a;
//	return p;
//}
//// �����Լ� 3 * p operator *
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