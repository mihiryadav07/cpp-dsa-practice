#include <iostream>
using namespace std;
int main ()
{
   int n = 100;
   int sum = 0;
   for(int count=2; count<=n; count=count+2)
   { sum+=count; }
   cout << "sum of all even no. from 2 to n = " << sum << endl;
    return 0;
}