//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//using namespace std;
//
//// ���� �޸� ����
//typedef struct student{
//	char name[20];
//	int age;
//	//c++������ ����ü �ȿ� �Լ��� ������ �� ����
//	void print2() {
//		printf("%s %d\n",name, age);
//	}
//}Student;
//
//void print(Student s) {
//	printf("%s %d\n", s.name, s.age);
//}
//
//int main() {
//	//int[3] ���� ���� C style
//	int* arr = (int*) malloc(sizeof(int) * 3);
//	arr[0] = 1;
//	*(arr + 1) = 2;
//	arr[2] = 3;
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	free(arr);
//
//	Student* arr2 = (Student *)malloc(sizeof(Student) * 3);
//	strcpy(arr2[0].name, "�Ѹ�");
//	arr2[0].age = 8;
//	print(arr2[0]);
//	arr2[0].print2();
//	free(arr2);
//
//
//
//
//	return 0;
//}