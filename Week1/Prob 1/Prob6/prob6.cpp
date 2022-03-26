#include <iostream>
using namespace std;

void swapDptr(int** x, int** y) {
	int* temp = *x;
	**x = **y;
	**y = *temp;
}

int main() {
	int x = 5, y = 7; int* px = &x; int* py = &y;

	cout << "swapDptr() 호출 전 : " << px << " " << py
		<< " " << x << " " << y << endl; // 확인
	swapDptr(&px, &py); // 함수호출
	cout << "swapDptr() 호출 후 : " << px << " " << py
		<< " " << x << " " << y << endl; // 확인
}