#include <iostream>
using namespace std;
#include "Student.h"

int main()  // Client World!
{
	Student harry = {975, {'A','B','C'}}; 
 	
 	cout << "Struct display member function:" << endl;
 	harry.display();
 	
 	cout << "\n\nGlobal display function:" << endl;
 	display();
 	
 	cout << "\nFoo function:" << endl;
 	
 	harry.foo();

	return 0;
}

