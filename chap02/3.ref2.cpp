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
//	print(a, b); //a��� ������ c��� �̸��� �߰��� ����
//	cout << a << ", " << b << endl; //11 6 -> ������ ���� �þ(���� d�� ������ a�� b�� �޸𸮸� ����Ű�� ����)
//
//	return 0;
//}