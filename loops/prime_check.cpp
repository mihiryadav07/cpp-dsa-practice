#include <iostream>
using namespace std;
int main () 
{
int n;
cout << "Enter the number = ";
cin >> n;

bool isPrime = true;
for(int i=2; i*i<=n; i++)
{ if(n%i==0)
 {isPrime = false;
break; }
}

if(isPrime == true)
{cout << n << " is a prime no. ";}
else
{ cout << n << " is not a prime no. ";}    
return 0;
}




