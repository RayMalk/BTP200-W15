 // Constructors and Destructors
 // destructors.cpp

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
     Student();   // default constructor
     Student(int, const char*);
     ~Student();  // destructor
     void set(int n, const char* g);
     Student update(int n, const char* g);
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

 Student::~Student()
 {
    cout << "Entering destructor for " << no
         << endl;
 }

 void Student::set(int n, const char* g)
 {
     no = n;
     strcpy(grade, g);
 }

 void Student::display() const 
 {
     cout << no << ' ' << grade;
 }
 
 Student Student::update(int n, const char* g) 
 {
     Student temp;
     temp = *this;
     no = n;
     strcpy(grade, g);
     
     return temp;
 }

 int main(void) 
 {
     Student harry(1234, "ABACA");
     
     harry.display();
     cout  << endl;
     
     Student backupHarry = harry.update(5678, "DDED");
     
     harry.display();
     cout  << endl;
     backupHarry.display();
     cout  << endl;
     
     return 0;
 }
 
 
