#include <iostream>
using namespace std;

int main() {
	int a, b = 3, c = 7;
	int* p = &b;
	int* q;
	int* r;

	// 포인터 변수를 조작하는 코드 작성
	// Step 1
	q = &b; r = &b;

	// Step 2
	a = 5;
	p = &a;

	// Step 3
	c = a + b + c;
	r = &c;


	cout << "a = " << *p << "(" << p << ")" << endl;
	cout << "b = " << *q << "(" << q << ")" << endl;
	cout << "c = " << *r << "(" << r << ")" << endl;
	return 0;
}