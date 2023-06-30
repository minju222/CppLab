//#include <iostream>
//
//using namespace std;
//
///*
//	참조형은 이름을 하나 더 만드는 것
//	함수의 파라미터 타입이 참조형이면 주소복사와 비슷한 효과를 낼 수 있다
//	함수의 리턴 타입이 참조형이면 호출한 쪽의 변수 타입은 일반형, 참조형 모두 가능 -> 하지만 주소를 똑같이 하려면 참조형으로 받아야함
//
//*/
//int& change(int& a, int& b) {
//	int res = a + b;
//	return res;
//}
//
//int& change2(int& a) {
//	printf("change2 a %d\n", &a); //0x01
//	return a;
//}
//
//
//int main() {
//	int a = 10;
//	int b = 5;
//	int& res = change(a, b);
//	cout << res << endl; //15
//
//
//
//	printf("main a %d\n", &a);//0x01
//	int& res2 = change2(a);
//	printf("main a %d\n", &res2);//0x01
//
//
//
//	return 0;
//}