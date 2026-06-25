#include <iostream>
using namespace std;
int main () {
char ch;
cout << "Enter a character: ";
cin >> ch;

if (ch >= 'a' && ch <= 'z')
{ cout << "Character is lowercase" << endl; }
else 
{ cout << "character is uppercase" << endl; }


return 0;
}