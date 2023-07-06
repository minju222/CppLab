//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//
//using namespace std;
//
//class Trans {
//public:
//	int fee;
//	void move() { cout << " 이동 합니다" << endl; }
//};
//
//// is a
//class Car : public Trans {
//public:
//	int fuel;
//	void moveCar() {
//		cout << "차동차가 ";
//		move();
//	}
//};
//
//int main(){
//	// 동적선언
//	Trans* t = new Trans;
//	Car* c = new Car;
//	
//	// polymorphism
//	// upcasting (안전한 형변환, 생략가능)
//	Trans* t1 = (Trans*)new Car;
//
//	// 지양한다 (월래는 안되는게 맞다) 추후 dynamic_case<> 를 통해 해결한다 
//	Car* c1 = (Car*)new Trans;
//	c1->moveCar();
//	// 다운캐스팅은 이미 업캐스팅된 변수를 자식타입으로 내릴때 사용한다
//	Car* c2 = (Car*)t1;
//	
//	delete t;
//	delete c;
//	delete c1;
//	delete c2;
//	return 0;
//}