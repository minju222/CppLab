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
//public: //�̰� ���ϸ� �⺻������ private��, ����ü�� �� ����
//	int a = 20;
//};
//
////acess modifier : public(������ ���� ����), protect, private(���� ��������� ���� ����)���������� -> ��ü�� ���Ἲ�� �ִ� �� => encapsulation
//class Date {
//private:
//protected://���� ����̰ų�(print�Լ�), Date�� ��ӹ��� subclass������ ���� ����
//	int year, month, day;
//public:
//	void print() {
//		cout << year << ", " << month << ", " << day << endl;
//	}
//	void setYear(int _year) {
//		year = _year;
//	}
//	void setMonth(int _month) {//get set���� �����͸� �Է��ϰ� �����ָ� �ȿ��� ���α׷��� ���� -> Date class�� ���Ἲ ���� ����
//		if (_month < 1 || _month>12) {
//			cout << "�߸��� �� �Է��Դϴ�" << endl;
//			return;
//		}
//		month = _month;
//	}
//	void setDay(int _day) {
//		day = _day;
//	}
//	int getYear() const{ //const ���� �� �޼ҵ忡���� ��� ����(year ��)�� ���� ������ �� ����
//		//year++;
//		return year; 
//	}
//	int getMonth() const { return month; }
//	int getDay() const { return day; }
//};
//
///*
//	���� ���� : �Լ��� ������ �����
//	���� ���� : ���α׷� ������ �����
//	Ŭ���� ��� ���� : ��ü�� �Ҹ�Ǹ� �����
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