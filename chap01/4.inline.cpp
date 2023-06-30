//#include <iostream>
//
//// 인라인 함수의 경우 컴파일러의 판단에 따라 
//// 인라인화 될수도 있고 아닐수도 있다
//
//inline int func1(int a, int b=30) {
//	/*
//	....
//
//	
//	*/
//	return a + b;
//}
//
//int main() {
//	
//	std::cout << 20 + 30 << std::endl;
//	std::cout << func1(20) << std::endl;
//	std::cout << func1(20) << std::endl;
//
//	return 0;
//}