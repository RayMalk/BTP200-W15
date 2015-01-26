#include <stdio.h>

struct Student   // defines a Student object, blue print
{
	int id;
	char name[15];
	double gpa;
};

int main(void)
{
	struct Student s1;  // creates the object s1 of type Student

	s1.id = 987656;
	s1.gpa = 3.76;
	
	printf("The gpa is: %.2f\n", s1.gpa);



	return 0;
}
