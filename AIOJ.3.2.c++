#include <iostream>
using namespace std;

string Hanoi( int n )
{
    string result = "A->C" , fore , aft;
    if( n == 1) return result ;
    else 
    {
        fore = Hanoi(n-1) ;
        aft = fore ;
        for(int i = 0 ; i < fore.length() ; i ++)
        {
            if( fore[i] == 'B')  fore[i] = 'C';
            else if( fore[i] == 'C' )  fore[i] = 'B';
            if( aft[i] == 'A') aft[i] = 'B';
            else if( aft[i] == 'B' ) aft[i] = 'A' ; 
        } 
        return fore + result + aft ;
    }


}

int main()
{
    int N ;
    cin >> N ;
    string result = Hanoi(N);
    for(int i = 0 ; i < result.length() ;)
    {
        for ( int j = 1 ; j <= 4 ; j ++, i ++)
        {
            cout << result[i] ;
        }
        cout << endl ;
    }
}