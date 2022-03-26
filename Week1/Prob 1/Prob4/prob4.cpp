#include <iostream>
#include <algorithm>
using namespace std;

int* topGrade(int* px, int* py, int* pz) {
	int *maxval;
	maxval = max_element(*px, *py, *pz);
	return maxval;
}

int main() {
	int* pgrade1, * pgrade2, * pgrade3;
	int* top; // 가장 높은 값을 갖는 변수의 주소 저장을 위한 포인터
	top = topGrade(pgrade1, pgrade2, pgrade3); // topGrade() 호출

	cout << "Top = " << *top << "(addr : " << top << ")" << endl;
	return 0;
}