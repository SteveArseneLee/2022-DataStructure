#include <iostream>
using namespace std;

void swapValue(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void swapAddr(int* px, int* py) {
	int temp = *px;
	*px = *py;
	*py = temp;
}

void swapRef(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int x = 5, y = 7; int* px = &x, * py = &y;
	swapValue(x, y); // 함수호출
	cout << "swapValue() 호출 후 : " << x << ", " << y << endl; // 확인
	swapAddr(px, py); // 함수호출
	cout << "swapAddr() 호출 후 : " << x << ", " << y << endl; // 확인
	swapRef(x, y); // 함수호출
	cout << "swapRef() 호출 후 : " << x << ", " << y << endl; // 확인
	return 0;
}