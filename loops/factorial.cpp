#include <iostream>
using namespace std;
int main()
{
 int n ;
int fact = 1;
 cout<< "enter the n = ";
 cin >> n;
 
 for(int i =2 ; i<=n; i++)
 { fact*=i;}
 cout << "factorial = " << fact << endl;
    return 0;
}