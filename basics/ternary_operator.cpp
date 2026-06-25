#include <iostream>
using namespace std;
int main () {
 char alphabet;
 cout << "Enter the alphabet = ";
cin >> alphabet;
cout << (alphabet>='a' && alphabet<='z'? "lowercase" : "uppercase") << endl;


    return 0;
}