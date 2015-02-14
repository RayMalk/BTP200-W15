 // Constructors, Destructors and Arrays
 // ctorsDtorsArrays.cpp

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
     ~Student();
     void set(int, const char*);
     void display() const;
 };

 Student::Student()
 {
     cout << "Entering constructor" << endl; 
     no = 0;
     grade[0] = '\0';
 }

 Student::~Student()
 {
     cout << "Entering destructor for " <<
          no << endl;
 }

 void Student::set(int n, const char* str)
 {
     no = n;
     strcpy(grade, str);
 }

 void Student::display() const 
 {
     cout << no << ' ' << grade;
 }

 int main(void)
 {
     Student a[3];

     a[0].set(1000, "AAAAA");
     a[1].set(1001, "BBBBB");
     a[2].set(1002, "CCCCC");
     for (int i = 0; i < 3; i++)
	 {
         a[i].display();
         cout  << endl;
     }
	 
	 return 0;
 }
