#include <iostream>
#include "structCar.h"

using namespace std;
extern Car;

void Car::Accel() {
	if (fuel > 0) {
		speed++;
		fuel--;
	}
	else {
		cout << "���Ḧ �����ϼ���" << endl;
	}
};
void Car::Break() {
	if (speed > 0) {
		speed--;
	}
	else {
		cout << "���̻� �ӵ��� ���� �� �����ϴ�" << endl;
	}
};
void Car::showState() {
	cout << "����: " << fuel << " �ӵ�: " << speed << endl;
};