#include <iostream>
using namespace std;
int main ()
{
   int n = 100;
   int sum = 0;
   for(int count=1; count<=n; count++)
   { sum+=count; }
   cout << "sum from 1 to n = " << sum << endl;
    return 0;
}