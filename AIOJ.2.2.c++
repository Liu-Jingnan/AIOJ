#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    for ( int i = 10 ; i <= 999 ; i ++)
    {
        a = i / 100 ;
        b = (i / 10) % 10;
        c = i % 10;
        if(a == 0) 
        {
            if (b*c > b+c)
            cout << i <<' ';
        }
        else if(a*b*c > a+b+c)
        cout << i <<' ';
    }
    return 0;
}