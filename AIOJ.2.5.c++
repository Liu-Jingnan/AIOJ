#include <iostream>
using namespace std ;

struct
{
    int y , m , d ; 
}date;

bool year ( int a )
{
    if((a%4 == 0 && a%100 !=0) || a%400 == 0 )
    return 1;
    else return 0;
}

int month ( int a , bool b)
{
    int day=0;
    for(int i = 1 ; i < a ; i ++)
    {
        switch(i)
        {
            case 1: case 3: case 5 : case 7 :case 8 : case 10 : case 12 :
            day += 31 ;
            break;
            case 4 : case 6 :case 9 : case 11 :
            day +=30;
            break;
            case 2 :
            if(b)  day += 29;
            else day += 28;
            break;
            
        }
    }
    return day;
}

int main()
{
    cin>> date.y >> date.m >> date.d;
    cout << month(date.m , year(date.y))+date.d<<endl;
}