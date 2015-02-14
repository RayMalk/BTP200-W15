 #include <iostream>
 #include <cstring>
 using namespace std;

 class Student
 {
 private:
     int no;
     char* grade;
 public:
     Student();
     Student(int, const char*);
     ~Student();
     void update(int, const char*);
     void display() const;
 };

 Student::Student() 
 {
     no = 0;
     grade = nullptr;
 }

 Student::Student(int n, const char* g) 
 {
     no = n;
     grade = new char[strlen(g) + 1];
     strcpy(grade, g);
 }

 Student::~Student() 
 {
     //delete [] grade;  // shallow copy: will double-free
 }
 
 void Student::update(int n, const char* g)
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
     Student harry(1234, "ABACA"), mary;
     
     mary = harry;

     cout << "Before updates: \n";
     harry.display();
     cout << endl;
     mary.display();
     cout << endl;
     
     harry.update(7896, "DDABD");
     
     cout << "\n\nAfter updates: \n";
     harry.display();
     cout << endl;
     mary.display();
     cout << endl;
     
     return 0;
 }
