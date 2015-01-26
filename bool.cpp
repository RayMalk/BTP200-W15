#include <iostream>
using namespace std;

int main()
{
	bool var1;
	
	var1 = true;
	
	cout << "Var1 is " << var1 << endl;
	cout << "Not Var1 is " << !!var1 << endl;
	
	int a = 4;
	
	cout << !!a << endl; // will output "1"
	
	auto b = 7.8;	// b is type double
	auto c = 5;	// c is of type int

	return 0;
}
