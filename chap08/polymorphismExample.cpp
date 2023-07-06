//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//
//using namespace std;
//
////Abstraction class(���� �����Լ��� ������ �ִ� Ŭ���� == �߻� Ŭ����) ->  ��üȭ �� �� ����, ������ ��ħ�� �Ǵ� class
//class Animal {
//public:
//	virtual void walk()=0;
//};
//
////���� �����Լ��� �ϳ� �� ���� -> ���ƴٴ� ���̵��� IFly���� ��ӹް� �� -> ���߻��
//class IFly {
//public:
//	virtual	void fly() = 0;
//};
//
//class Dog : public Animal{ //Dog�� Animal�� ��ӹ���, ���� ����Ŭ������ �Լ��� ������ Override �ؾ��� -> ���ϸ� �굵 abstraction class�� ��
//public:
//	void walk() { //Animal�� walk override, ������
//		cout << "�������� �ȴ´�" << endl;
//	}
//	void bark() {//Ȯ��
//		cout << "�������� ¢�´�" << endl;
//	}
//};
//
//class Bird : public Animal, public IFly {
//public:
//	void walk() {
//		cout << "���� �ȴ´�" << endl;
//	}
//
//	void fly() {
//		cout << "���� ���ư���" << endl;
//	}
//};
//
//class Human : public Animal {
//public:
//	void walk() {
//		cout << "����� �ȴ´�" << endl;
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
//		cout << "����� �ȴ´�" << endl;
//	}
//	void fly() {
//		cout << "���۸��� ���ƴٴѴ�" << endl;
//	}
//};
//
//class Superman2 : public Human{
//public:
//	//Human�� ��ӹ޾Ƽ� walk ���� ���ʿ�
//	//������ �����Ѵٸ�, ���� �������� ������ "���۸��� �ȴ´�"�� ��µ�
//	void walk() {
//		cout << "���۸��� �ȴ´�" << endl;
//	}
//	void fly() {
//		cout << "���۸��� ���ƴٴѴ�" << endl;
//	}
//};
//
//class Superman3 : public Human, public IFly {
//public:
//	//Human�� ��ӹ޾Ƽ� walk ���� ���ʿ�
//	//������ �����Ѵٸ�, ���� �������� ������ "���۸��� �ȴ´�"�� ��µ�
//	void walk() {
//		cout << "���۸��� �ȴ´�" << endl;
//	}
//	void fly() {
//		cout << "���۸��� ���ƴٴѴ�" << endl;
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
//	//Animal* a = new Animal; //�Ұ���
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
//	// Dog, Bird, Human ��� toWalk �Լ��� ���ڰ� �� �� ���� -> Animal�� upcasting�� �ڵ����� �Ǳ� ����
//	toWalk((Animal*)d); // == toWalk(d);
//	toWalk((Animal*)b);
//	toWalk((Animal*)g);
//
//	Superman* s = new Superman;
//	//toWalk(s); //���� -> Superman�� Animal�� ��ӹ��� �ʾƼ� toWalk�� ���ڰ� �� �� ����
//	Superman1* s1 = new Superman1;
//	toWalk(s1); //Superman1�� Animal�� ��ӹ޾Ƽ�, toWalk�� ���ڷ� ��� ����
//
//
//	//Human* s2 = new Superman1; //�Ұ���
//	Human* s2 = new Superman2; //Superman2�� Human�� ��� ����
//	toWalk(s2); //Superman2�� ��ӹ��� Human�� Animal�� ��ӹް� �־, s2�� Animal�� upcasting ����
//
//
//	// ���߻�� ����
//	Animal* s3 = new Superman3; // ���߻������ ���� Superman�� Animal, Human, IFly�� �� ��ȯ ��������
//	Human* s4 = new Superman3;
//	IFly* s5 = new Superman3; // ���߻������ toFly ��� ����
//	Superman3* s6 = new Superman3; // ���߻������ toFly ��� ����
//
//	toFly(b);
//	toFly(s5);
//	toFly(s6);
//
//	return 0;
//}
