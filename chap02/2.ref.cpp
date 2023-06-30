//#include <iostream>
//
//int main() {
//	int a = 10;
//
//	printf("%u %u\n", a, &a); //10 0x01
//
//	int b = a;
//	printf("%u %u\n", b, &b); //10 oxo2
//	
//
//	int& c = a; //&라는 새로운 키워드(레퍼런스 변수)-> 무조건 값을 줘야함, a의 주소공간을 지칭하는 이름이 하나 더 생기는 것
//	int& d = c;
//	printf("%u %u %u\n", c, &c, d); //10 0x01 10-> a와 c의 주소값이 같음 -> 같은 변수임
//
//	c = 100;
//	printf("%d\n", a); //10
//
//
//	int arr[3] = { 1,3,5 };
//	int& a1 = arr[0];
//	int& a2 = arr[1];
//	int& a3 = arr[2];
//
//	a1 = 100;
//	a2 = 200;
//	a3 = 300;
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d\n", arr[i]); //100 200 300
//	}
//
//
//	return 0;
//}