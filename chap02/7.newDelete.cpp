//#include <iostream>
//
//using namespace std;
//
//int main() {
//	//int[3] ���� ���� C style
//	int a00[3]; //stack (����)
//	int* arr = (int*)malloc(sizeof(int) * 3); //heap(����)
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
//	int* arr2 = new int[3]; //malloc ��ſ� new ����, heap, ��ü ���� �ʱ�ȭ �۾� ����
//	arr2[0] = 3;
//	arr2[1] = 5;
//	arr2[2] = 7;
//
//	for (int i = 0; i < 3; i++) {
//		cout << arr2[i] << " ";
//	}
//	cout << endl;
//
//	delete[] arr2; // free ��� ���, �迭 �ƴϸ� �׳� delete�ϸ� ��
//
//
//
//
//
//
//	return 0;
//}