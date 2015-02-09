 // Two-Argument Constructor
 // overload.cpp

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
     Student(int, const char*);
     void display() const;
 };

 Student::Student()
 {
    no = 0;
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
     Student harry(1234, "ACDC"), mary(1235,"BBCDA");
     
     Student joe;

     harry.display();
     cout  << endl;
     mary.display();
     cout  << endl;
	 
	 return 0;
 }
