//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//
//using namespace std;
//
//// 상위클래스는 하위클래스의 일반화 클래스이기 때문에
//// 꼭 객체화되야 하는것은 아니다
//class First {
//public:
//	// 순수 가상함수
//	virtual void print() = 0;
//};
//class Second : public First {
//public:
//	void print() {
//		cout << "Second " << endl;
//	}
//};
//class Third : public Second {
//public:
//	void print() {
//		cout << "Third " << endl;
//	}
//	
//};
//// 폴리머피즘에 의해 First 하위 타입이
//// First 타입으로 업캐스팅하게 되고
//// virtual 키워드에 의해 
//// 함수의 실행은 마지막으로 오버라이딩된 함수가 실행된다
//void printPoly(First* s) {
//	s->print();
//};
////void printPoly(Third* s) {
////	s->print();
////};
//
////      view (virtual onDraw)
//// button hr radio checkbox
///*
//	void draw(view v){
//		v.onDraw()
//	}
//*/
//
//int main() {
//	//First* f1 = new First;
//	//f1->print();
//	First* f2 = new Second;
//	//f2->print();
//	printPoly(f2);
//	First* f3 = new Third;
//	printPoly(f3);
//
//	return 0;
//}