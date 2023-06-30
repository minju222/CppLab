#pragma once
struct CCar {
	int speed = 0;
	int fuel = 0;
	void Accel();
	void Break();
	void showState();
};