#include <iostream>
using namespace std;
int main () { 

    int n = 4;

    //TOP
    for( int i=0 ; i<n ; i++ )
    {
        //star
        for( int j=0 ; j<i+1 ; j++ )
        {  cout<<" * ";  }

        //space
        for( int j=0 ; j<2*(n-i-1) ; j++ )
        {  cout<<"   " ;  }

        //star
        for( int j=0 ; j<i+1 ; j++ )
        {  cout<<" * " ;  }

        cout << endl;

    }

    //BOTTOM
    for( int i=0 ; i<n ; i++ )
    {
        //star
        for( int j=0 ; j<n-i ; j++ )
        { cout << " * " ; }

        //space
        for( int j=0 ; j<2*i ; j++ )
        { cout << "   " ; }

        //star
        for( int j=0 ; j<n-i ; j++ )
        { cout << " * " ; }

        cout << endl;
    }

    return 0;
}