//#include <iostream>
//
//using namespace std;
//
///*
//	�������� �̸��� �ϳ� �� ����� ��
//	�Լ��� �Ķ���� Ÿ���� �������̸� �ּҺ���� ����� ȿ���� �� �� �ִ�
//	�Լ��� ���� Ÿ���� �������̸� ȣ���� ���� ���� Ÿ���� �Ϲ���, ������ ��� ���� -> ������ �ּҸ� �Ȱ��� �Ϸ��� ���������� �޾ƾ���
//
//*/
//int& change(int& a, int& b) {
//	int res = a + b;
//	return res;
//}
//
//int& change2(int& a) {
//	printf("change2 a %d\n", &a); //0x01
//	return a;
//}
//
//
//int main() {
//	int a = 10;
//	int b = 5;
//	int& res = change(a, b);
//	cout << res << endl; //15
//
//
//
//	printf("main a %d\n", &a);//0x01
//	int& res2 = change2(a);
//	printf("main a %d\n", &res2);//0x01
//
//
//
//	return 0;
//}