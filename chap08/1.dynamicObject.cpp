//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//
//using namespace std;
//
//class Trans {
//public:
//	int fee;
//	void move() { cout << " �̵� �մϴ�" << endl; }
//};
//
//// is a
//class Car : public Trans {
//public:
//	int fuel;
//	void moveCar() {
//		cout << "�������� ";
//		move();
//	}
//};
//
//int main(){
//	// ��������
//	Trans* t = new Trans;
//	Car* c = new Car;
//	
//	// polymorphism
//	// upcasting (������ ����ȯ, ��������)
//	Trans* t1 = (Trans*)new Car;
//
//	// �����Ѵ� (������ �ȵǴ°� �´�) ���� dynamic_case<> �� ���� �ذ��Ѵ� 
//	Car* c1 = (Car*)new Trans;
//	c1->moveCar();
//	// �ٿ�ĳ������ �̹� ��ĳ���õ� ������ �ڽ�Ÿ������ ������ ����Ѵ�
//	Car* c2 = (Car*)t1;
//	
//	delete t;
//	delete c;
//	delete c1;
//	delete c2;
//	return 0;
//}