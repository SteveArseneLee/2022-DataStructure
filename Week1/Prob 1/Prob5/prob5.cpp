#include <iostream>
using namespace std;

int main() {
	int a; int* p; int** q; int*** r;
	// code1 : 포인터 변수 초기화 코드 작성 
	p = &a; q = &p; r = &q;

	printf("Enter a number");
	// code2 : 변수 a를 이용해 입력받기
	cin >> a;
	cout << "Your number is " << a << endl;

	printf("Enter a number");
	// code3 : 변수 p를 이용해 입력받기
	cin >> *p;
	cout << "Your number is " << a << endl;

	printf("Enter a number");
	// code3 : 변수 p를 이용해 입력받기
	cin >> **q;
	cout << "Your number is " << a << endl;
	
	printf("Enter a number");
	// code3 : 변수 p를 이용해 입력받기
	cin >> ***r;
	cout << "Your number is " << a << endl;
}
