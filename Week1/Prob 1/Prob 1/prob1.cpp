#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int grade1, grade2, grade3;
	int* pgrade1 = &grade1;
	int* pgrade2 = &grade2;
	int* pgrade3 = &grade3;

	cin >> grade1 >> grade2 >> grade3;
	cout << "Value : grade1 = " << grade1 << setw(5) << "*pgrade1 = " << *pgrade1 << "		*&grade1 = " << *&grade1 << endl;
	cout << "Addr : &grade1 = " << &grade1 << "		pgrade1 = " << pgrade1 << "		&pgrade1" << &pgrade1 << endl;
	cout << "Value : grade2 = " << grade2 << "		*pgrade2 = " << *pgrade2 << "		*&grade2 = " << *&grade2 << endl;
	cout << "Addr : &grade2 = " << &grade2 << "		pgrade2 = " << pgrade2 << setw(5) << "&pgrade2" << &pgrade2 << endl;
	cout << "Value : grade3 = " << grade3 << "		*pgrade3 = " << *pgrade3 << "		*&grade3 = " << *&grade3 << endl;
	cout << "Addr : &grade3 = " << &grade3 << "		pgrade3 = " << pgrade3 << "		&pgrade3" << &pgrade3 << endl;

}