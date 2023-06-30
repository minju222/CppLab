//#include <iostream>
//
//using namespace std;
//
//int main() {
//	//int[3] 동적 생성 C style
//	int a00[3]; //stack (정적)
//	int* arr = (int*)malloc(sizeof(int) * 3); //heap(동적)
//	arr[0] = 1;
//	*(arr + 1) = 2;
//	arr[2] = 3;
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	free(arr);
//	//c++ style
//	int* arr2 = new int[3]; //malloc 대신에 new 가능, heap, 객체 관련 초기화 작업 수행
//	arr2[0] = 3;
//	arr2[1] = 5;
//	arr2[2] = 7;
//
//	for (int i = 0; i < 3; i++) {
//		cout << arr2[i] << " ";
//	}
//	cout << endl;
//
//	delete[] arr2; // free 대신 사용, 배열 아니면 그냥 delete하면 됨
//
//
//
//
//
//
//	return 0;
//}