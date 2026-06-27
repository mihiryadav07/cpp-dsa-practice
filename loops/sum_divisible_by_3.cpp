#include <iostream>
using namespace std;

int main () 
{
int n;
cout << "enter the n = ";
cin >> n;
int sum = 0;
for(int i=3 ; i<=n; i+=3)
 {sum+=i;}
 cout << "sum of all number from 1 to " << n << " which are divisible by 3 = " << sum << endl;
   return 0;
}