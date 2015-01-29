 #include <iostream>
 using namespace std;

 int main() {
     int attendance = 27;
     cout << "Field Width" << endl;
     cout << "1234567890" << endl;
     cout.width(10);
     cout << attendance << endl;
     cout << attendance << endl;
     
     cout << "\n\nPadding" << endl;
     cout << "1234567890" << endl;
     cout.fill('*');
     cout.width(10);
     cout << attendance << endl;
     
     cout.fill(' ');
     double pi = 3.141592653;
     cout << "\n\nFixed Format" << endl;
     cout << "1234567890" << endl;
     cout.width(10);
     cout.setf(ios::fixed);
     cout << pi << endl;
     
     cout << "\n\nUnset Fixed Format" << endl;
     cout << "1234567890" << endl;
     cout.width(10);
     cout.setf(ios::fixed);
     cout << pi << endl;
     cout.unsetf(ios::fixed);
     cout << pi << endl;
     
     cout << "\n\nScientific Format" << endl;
     cout << "12345678901234" << endl;
     cout.width(14);
     cout.setf(ios::scientific);
     cout << pi << endl;
     
     cout << "\n\nLeft Justified" << endl;
     cout << "1234567890" << endl;
     cout.width(10);
     cout.fill('?');
     cout.setf(ios::left);
     cout << pi << endl;
     
     cout << "\n\nPrecision" << endl;
     cout << "1234567890" << endl;
     cout.setf(ios::fixed);
     cout.fill(' ');
     cout.precision(3);
     cout.width(10);
     cout << pi << endl;
     
     return 0;
 }
