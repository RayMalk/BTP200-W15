#include <stdio.h>

struct Student   // defines a Student object, blue print
{
	int id;
	char name[15];
	double gpa;
};

void setGPA(struct Student* s, double gpa)
{	
	s->gpa = gpa;  // same as: (*s).gpa = gpa;
}

int main(void)
{
	struct Student s1;  // creates the object s1 of type Student

	setGPA(&s1, 6.5);

	printf("The GPA is: %.2f\n", s1.gpa);


	return 0;
}
