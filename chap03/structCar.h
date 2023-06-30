#pragma once
struct Car {
	int speed = 0;
	int fuel = 0;
	void Accel();
	void Break();
	void showState();
};