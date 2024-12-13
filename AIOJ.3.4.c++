#include <iostream>
using namespace std;

void myAdjust(int * p , int n , int m)
{
    int a[n] ;
    int i = 0;
    for (  ; i < n-m ; i ++)
    {
        a[m+i] = p[i]; 
    }
    for ( ; i < n ; i ++)
    {
        a[i+m-n] =p[i] ;
    }
    for( i = 0 ; i < n ; i ++)
    p[i] = a[i] ;
}

int main()
{
    int N , M ;
    cin >> N >> M;
    int * a = new int[N];
    for (int i = 0 ; i < N ; i ++)
    cin >> a[i] ;
    myAdjust( a , N , M );
    for( int  i = 0 ; i < N ; i++)
    cout << a[i] << ' ' ;
}