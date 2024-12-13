#include<iostream>
using namespace std;

void mySum(int * p , int len , int * sumOdd , int * sumEven)
{
    for( int  i = 0 ; i < len ; i ++)
    {
        if( p[i] % 2 == 0) *sumEven += p [i];
        else *sumOdd += p [i] ;
    }
}

int main()
{
    int N , Odd=0 , Even = 0;
    cin >> N ; 
    int * a = new int[N];
    for( int  i = 0 ; i < N ; i ++)
    {
        cin >>  a[i];
    }
    mySum( a , N , &Odd , &Even );
    cout << Odd << ' ' << Even ;
}