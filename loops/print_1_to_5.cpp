#include <iostream>
using namespace std;

int main () 
{


  int n;
   cout << "enter the no. = ";
  cin >> n;
  int sum = 0;

for(int i=3 ; i<=n ; i+=3)
{ sum+=i;}
 cout  << "sum of all no. from 1 to " << n << " which are divisble by 3 = " << sum << endl;


   return 0;
}