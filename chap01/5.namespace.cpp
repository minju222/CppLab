//#include <iostream>
//
//// namespace
//
//namespace AA {
//	int a;
//	void func1();
//}
//
//namespace BB {
//	int a;
//	void func1();
//}
//
//namespace CC {
//	void func1();
//}
//
//using namespace CC;
//
//int main() {
//	AA::a = 10;
//	AA::func1();
//	BB::a = 20;
//	BB::func1();
//	func1(); //�������� ���� ã�� ������ CC�� func1 ����
//	return 0;
//}
//
//void AA::func1() {
//	std::cout << "AA::func1 " << a << std::endl;
//}
//
//void BB::func1() {
//	std::cout << "BB::func1 " << a << std::endl;
//}
//
//void CC::func1() {
//	std::cout << "CC::func1 " << std::endl;
//}