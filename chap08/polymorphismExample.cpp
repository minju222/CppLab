//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//
//using namespace std;
//
////Abstraction class(순수 가상함수를 가지고 있는 클래스 == 추상 클래스) ->  객체화 될 수 없음, 설계의 지침이 되는 class
//class Animal {
//public:
//	virtual void walk()=0;
//};
//
////순수 가상함수를 하나 더 만듬 -> 날아다닐 아이들은 IFly까지 상속받게 함 -> 다중상속
//class IFly {
//public:
//	virtual	void fly() = 0;
//};
//
//class Dog : public Animal{ //Dog는 Animal을 상속받음, 순수 가상클래스의 함수를 무조건 Override 해야함 -> 안하면 얘도 abstraction class가 됨
//public:
//	void walk() { //Animal의 walk override, 재정의
//		cout << "강아지가 걷는다" << endl;
//	}
//	void bark() {//확장
//		cout << "강아지가 짖는다" << endl;
//	}
//};
//
//class Bird : public Animal, public IFly {
//public:
//	void walk() {
//		cout << "새가 걷는다" << endl;
//	}
//
//	void fly() {
//		cout << "새가 날아간다" << endl;
//	}
//};
//
//class Human : public Animal {
//public:
//	void walk() {
//		cout << "사람이 걷는다" << endl;
//	}
//};
//
//class Superman {
//
//};
//
//class Superman1: public Animal, IFly {
//public:
//	void walk() {
//		cout << "사람이 걷는다" << endl;
//	}
//	void fly() {
//		cout << "슈퍼맨이 날아다닌다" << endl;
//	}
//};
//
//class Superman2 : public Human{
//public:
//	//Human을 상속받아서 walk 구현 불필요
//	//하지만 구현한다면, 가장 마지막에 구현된 "수퍼맨이 걷는다"가 출력됨
//	void walk() {
//		cout << "수퍼맨이 걷는다" << endl;
//	}
//	void fly() {
//		cout << "슈퍼맨이 날아다닌다" << endl;
//	}
//};
//
//class Superman3 : public Human, public IFly {
//public:
//	//Human을 상속받아서 walk 구현 불필요
//	//하지만 구현한다면, 가장 마지막에 구현된 "수퍼맨이 걷는다"가 출력됨
//	void walk() {
//		cout << "수퍼맨이 걷는다" << endl;
//	}
//	void fly() {
//		cout << "슈퍼맨이 날아다닌다" << endl;
//	}
//};
//
//void toWalk(Animal* a) {
//	a->walk();
//}
//
//void toFly(IFly* f) {
//	f->fly();
//}
//
//
//int main() {
//	//Animal* a = new Animal; //불가능
//	Dog* d = new Dog;
//	d->walk();
//	d->bark();
//
//	Bird* b = new Bird;
//	b->walk();
//	b->fly();
//
//	Animal* h = new Human;
//	h->walk();
//
//	Human* g = new Human;
//
//
//	// Dog, Bird, Human 모두 toWalk 함수의 인자가 될 수 있음 -> Animal로 upcasting이 자동으로 되기 때문
//	toWalk((Animal*)d); // == toWalk(d);
//	toWalk((Animal*)b);
//	toWalk((Animal*)g);
//
//	Superman* s = new Superman;
//	//toWalk(s); //오류 -> Superman은 Animal을 상속받지 않아서 toWalk의 인자가 될 수 없음
//	Superman1* s1 = new Superman1;
//	toWalk(s1); //Superman1은 Animal을 상속받아서, toWalk의 인자로 사용 가능
//
//
//	//Human* s2 = new Superman1; //불가능
//	Human* s2 = new Superman2; //Superman2는 Human을 상속 받음
//	toWalk(s2); //Superman2가 상속받은 Human이 Animal을 상속받고 있어서, s2는 Animal로 upcasting 가능
//
//
//	// 다중상속 이후
//	Animal* s3 = new Superman3; // 다중상속으로 인해 Superman은 Animal, Human, IFly로 다 변환 가능해짐
//	Human* s4 = new Superman3;
//	IFly* s5 = new Superman3; // 다중상속으로 toFly 사용 가능
//	Superman3* s6 = new Superman3; // 다중상속으로 toFly 사용 가능
//
//	toFly(b);
//	toFly(s5);
//	toFly(s6);
//
//	return 0;
//}
