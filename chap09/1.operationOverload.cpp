//#include <iostream>
//
//using namespace std;
//// �����ڸ� operator ��� Ű���带 �̿��Ͽ� 
//// �Լ����·� ������ ���� �ϴ� ������ ó�� 
//// ����Ҽ� �ְ��ϴ� ���
//
//class Point {
//public:
//	int x, y;
//	Point(int x, int y) :x(x), y(y) {}
//};
//
//int add(int a, int b) {
//	return a + b;
//};
//
//Point add(Point p1, Point p2) {
//	p1.x  += p2.x;
//	p1.y -= p2.y;
//	return p1;
//}
//
//Point operator+(Point p1, Point p2) {
//	cout << "operator+" << endl;
//	p1.x += p2.x;
//	p1.y -= p2.y;
//	return p1;
//}
//Point operator+(Point p1, int a) {
//	cout << "operator+" << endl;
//	p1.x += a;
//	p1.y -= a;
//	return p1;
//}
//Point operator+(int a, Point p1) {
//	cout << "operator+" << endl;
//	p1 + a;
//	return p1;
//}
//
//int main() {
//	int a = 10;
//	int b = 5;
//	Point p1(10, 10);
//	Point p2(1, 1);
//	cout << add(10, 5) << endl;;
//	a + b;
//	13.5f + 10;
//	'a' + 10;
//	
//	Point res = add(p1 , p2);
//	
//	res = 10 + p2;
//
//	cout << res.x << "," << res.y << endl;
//	return 0;
//}
