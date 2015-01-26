#include <iostream>
using namespace std;
#include "Student.h"

int main()
{
	Student harry;

	//harry.no = 975; // error, private!!! 
	//cout << harry.no; // error, private!!! 
	
 	harry.set(975, "ABC");
 	harry.display();

	return 0;
}
