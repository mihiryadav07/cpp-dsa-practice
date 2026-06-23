#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a , b ;
    cout << "enter a: "<< endl ;
    cin >> a;

    cout << " enter b: "<< endl ;
    cin >> b;
    double sum = a+b;
    double difference = a-b;
    double product = a*b;
    cout << "sum: " << sum << endl;
    cout << "difference: " << difference << endl;
    cout << "product: " << product << endl;
    if (b!=0) {
        double division = a/b;
        double modulo = fmod(a, b);
        cout << "division: " << division << endl;
        cout << "modulo: " << modulo << endl;
    } else {
        cout << "Division: undefined " << endl;
        cout << "modulo: undefined " << endl;
    }

    return 0;
}