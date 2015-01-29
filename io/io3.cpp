 #include <iostream>
 using namespace std;

 int main() {
     int i;
     char c;
     double x;
     char s[8];
     cout << "Enter an integer,\n"
             "a character,\n"
             "a floating-point number and\n"
             "a string : " << flush;
     cin >> i;
     cin >> c;
     cin >> x;
     cin >> s;  // possible overflow
     cout << "Entered " << i << ' '
          << c << ' ' << x << ' ' << s << endl;
     
     return 0;  
 }
