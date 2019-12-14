#include <iostream>

using namespace std;

void passByVal(int a, int b);
void passByRef(int& a, int& b);

int main()
{
	int a = 4;
	int b = 5;
	
	cout << "a = " << a << " b = " << b << endl;

	passByVal(a, b);
	
	cout << "a = " << a << " ref = " << b << endl;

	passByRef(a, b);

	cout << "a = " << a << " ref = " << b << endl;
	
	return 0;
}


void passByVal(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	

	cout << "Pass by Val: a = " << a << ", b = " << b << endl;
}

void passByRef(int& a, int& b)
{
	a++;
	b++;

	cout << "Pass by Ref: a = " << a << ", b = " << b << endl;
}
