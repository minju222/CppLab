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
//	Sample() {
//		name = NULL;
//	}
//
//	Sample(const char* _name) {
//		int len = strlen(_name);
//		name = new char[len + 1];
//		strcpy(name, _name);
//		a = 0;
//		b = 0;
//		cout << "constructor" << endl;
//	}
//	//�Ҹ���
//	~Sample() {
//		delete[] name;
//		cout << "destructor" << endl;
//	}
//
//	void setName(const char* _name) {
//		int len = strlen(_name);
//		name = new char[len + 1];
//		strcpy(name, _name);
//	}
//
//	void print() const {
//		cout << name << endl;
//	}
//};
//
//int main() {
//	Sample ss[3];
//	ss[0].a = 10;
//	ss[0].b = 5;
//	ss[0].setName("�Ѹ�");
//	ss[0].print();
//
//	//cout << "����Ʈ �迭 ����" << endl;
//	//Sample* pss[3];
//	//pss[0] = new Sample("�����");
//	//pss[1] = new Sample("�����1");
//	//pss[2] = new Sample("�����2");
//
//	//delete[] pss; �̰� �ƴ�
//	//delete pss[0];
//	//delete pss[0];
//	//delete pss[0];
//
//
//	return 0;
//}