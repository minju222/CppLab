//#include <iostream>
//using namespace std;
//
////c style
////void print(int* c, int* d) {
////	cout << c << ", " << d << endl; //10 5
////	*c++;
////	*d++;
////
////}
//
//void print(int& c, int& d) {
//	cout << c << ", " << d << endl; //10 5
//	c++;
//	d++;
//
//}
//
//
//int main() {
//	int a = 10;
//	int b = 5;
//
//
//	//c style
//	//print(&a, &b);
//
//
//	//cpp
//	print(a, b); //a라는 공간에 c라는 이름을 추가로 붙임
//	cout << a << ", " << b << endl; //11 6 -> 실제로 값이 늘어남(ㅇ와 d가 실제로 a와 b의 메모리를 가리키기 때문)
//
//	return 0;
//}