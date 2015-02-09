 // Dynamic Memory Allocation
 // dynamic.cpp

 #include <iostream>
 using namespace std;

 struct Student
 {
     int no;
     char grade[14];
 };

 int main()
 {
     int n;
     
     Student s1;  // Static Space
     
     Student* student = nullptr;

     cout << "Enter the number of students: ";
     cin >> n;
     student = new Student[n];

     for(int i = 0; i < n; i++)
     {
         cout << "Student Number: ";
         cin  >> student[i].no;
         cout << "Student Grades: ";
         cin  >> student[i].grade;
     }

     for (int i = 0; i < n; i++)
     {
         cout << student[i].no << ": " << student[i].grade << endl; 
     }

     delete [] student;
     student = nullptr;

     
     return 0;
 }
