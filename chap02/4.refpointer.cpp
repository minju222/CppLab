//#include <iostream>
//
//
//using namespace std;
//
//
//int main() {
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	cout << a << ", " << *pa << ", " << **ppa << endl; //10 10 10
//
//	int &ref = a;
//	int* &pref = pa; // pa 포인터와 pref와 같음..?
//	int** &ppref = ppa;
//	cout << ref << ", " << *pref << ", " << **ppref << endl; //10 10 10
//
//}