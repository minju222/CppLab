//#include <iostream>
//using namespace std;
//// ��ġ ���׿����� �����ε�
//class Point {
//private :
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	// �ɹ��Լ���
//	// ��ġ ���׿����� 
//	/*const Point& operator++(int) {
//		cout << "��ġ �ɹ� operator++" << endl;
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
//// �����Լ��� ��ġ���� �����ڸ� ����
//const Point& operator++(Point& p, int) {
//	cout << "��ġ ���� operator++" << endl;
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