 #include <iostream>
 #include <iomanip>   // Manipulators
 using namespace std;

 int main( ) {
 
     char a[5], b[2], c[7], d[7];
     cout << "Enter : ";
     cin >> setw(5) >> a >>
            setw(2) >> b >> noskipws >>
            c >> skipws >> d;
     cout << "Stored '" << a <<
             "' & '" <<  b <<
             "' & '" << c <<
             "' & '" << d << "'" << endl; 
     
     return 0;
 }

