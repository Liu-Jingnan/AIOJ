#include<iostream>
using namespace std;

bool strcheck( char * a , int N)
{
     for ( int i = 0 ; i < N ; i ++)
    {
        if(!(('a' <=  a[i] && a[i] <= 'z') || ('A' <=  a[i] && a[i] <= 'Z')))
            return 0 ;
    }
    return 1;
}

int main()
{
    int N ;
    cin >> N ;
    char* a = new char[N];
    cin >> a;
    cout << strcheck( a , N);
}
