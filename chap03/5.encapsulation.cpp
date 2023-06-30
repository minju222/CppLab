//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//
//struct tmp {
//	int a = 10;
//};
//
//class ctmp {
//public: //이거 안하면 기본적으로 private임, 구조체는 다 오픈
//	int a = 20;
//};
//
////acess modifier : public(누구나 접근 가능), protect, private(같은 멤버끼리만 접근 가능)접근제한자 -> 객체의 무결성을 주는 것 => encapsulation
//class Date {
//private:
//protected://같은 멤버이거나(print함수), Date를 상속받은 subclass에서만 접근 가능
//	int year, month, day;
//public:
//	void print() {
//		cout << year << ", " << month << ", " << day << endl;
//	}
//	void setYear(int _year) {
//		year = _year;
//	}
//	void setMonth(int _month) {//get set으로 데이터를 입력하고 보여주면 안에서 프로그래밍 가능 -> Date class의 무결성 보장 가능
//		if (_month < 1 || _month>12) {
//			cout << "잘못된 월 입력입니다" << endl;
//			return;
//		}
//		month = _month;
//	}
//	void setDay(int _day) {
//		day = _day;
//	}
//	int getYear() const{ //const 쓰면 이 메소드에서는 멤버 변수(year 등)의 값을 변경할 수 없다
//		//year++;
//		return year; 
//	}
//	int getMonth() const { return month; }
//	int getDay() const { return day; }
//};
//
///*
//	지역 변수 : 함수가 끝나면 사라짐
//	전역 변수 : 프로그램 끝나면 사라짐
//	클래스 멤버 변수 : 객체가 소멸되면 사라짐
//*/
//int main() {
//	tmp t1;
//	t1.a = 100;
//	ctmp t2;
//	t2.a = 200;
//
//	Date d;
//	d.setYear(2023);
//	d.setMonth(06);
//	d.setMonth(07);
//	d.setDay(29);
//	d.print();
//	return 0;
//}