//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//
//
////�Ҹ���
//
//class Sample {
//private:
//
//public:
//	int a = 0, b = 0;
//	char* name;
//	//consturctor
//	Sample(const char* _name){
//		int len = strlen(_name);
//		name = new char[len+1];
//		strcpy(name, _name);
//		cout << "constructor" << endl;
//	}
//	//�Ҹ���
//	~Sample() {
//		delete[] name;
//		cout << "destructor" << endl;
//	}
//
//	void print() const {
//		cout << name << endl;
//	}
//};
//
//int main() {
//	//���� ����(�Ҹ��� ȣ�� ���ʿ�)
//	Sample s1("hong");
//	cout << "��������" << endl;
//	s1.print();
//	////���� ����(�Ҹ��ڰ� �ڵ����� ���� �ȵ�) -> delete �ؾ���
//	//Sample* s2 = new Sample;
//	//cout << "��������" << endl;
//	//delete s2;
//
//	////�ӽ��� ����(������ ���� ����ǰ� �Ҹ�, �Ҹ��� ȣ�� ���ʿ�)
//	//Sample();
//	//cout << "�ӽ��� ���� ���" << endl;
//
//	return 0;
//}