 // One-Argument Constructor
 // oneArgCtor.cpp

 #include <iostream>
 #include <cstring>
 using namespace std;
 
 const int M = 13;

 class Student
 {
 private:
     int no;
     char grade[M+1];
 public:
     Student();
     Student(int);
     Student(int, const char*);
     void display() const;
 };

 Student::Student()
 {
     no = 0;
     grade[0] = '\0';
 }

 Student::Student(int n)
 {
     no = n;
     grade[0] = '\0';
 }

 Student::Student(int n, const char* g)
 {
     no = n;
     strcpy(grade, g);
 }

 void Student::display() const
 {
     cout << no << ' ' << grade;
 }

 int main(void)
 {
     Student harry, mary; // calls no-argument constructor twice 

     harry = 975;   // promotes an int to a Student

     harry.display();
     cout  << endl;

     mary = 976; // promotes an int to a Student

     mary.display();
     cout  << endl;
	 
	 return 0;
 }
