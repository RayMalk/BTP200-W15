#include <iostream>
using namespace std;
#include "Student.h"

int main()
{
	Student harry = {975, {'A','B','C'}}; 
	Student mike;
	
	mike.no = 987;
	mike.grade[0] = 'E';
 	
 	cout << "Struct display member function:" << endl;
 	
 	harry.display();
 	
 	cout << "Struct display member function:" << endl;
 	mike.display();
 	
 	cout << endl;

	return 0;
}
