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
		cout << "연료를 주입하세요" << endl;
	}
};
void Car::Break() {
	if (speed > 0) {
		speed--;
	}
	else {
		cout << "더이상 속도를 줄일 수 없습니다" << endl;
	}
};
void Car::showState() {
	cout << "연료: " << fuel << " 속도: " << speed << endl;
};