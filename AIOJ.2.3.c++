#include<iostream>
using namespace std;
int main()
{
    int Max=0,Min=10;
    double sum=0;
    int Mark[11];
    for(int i=0;i<=9;i++)    
    {
        cin>>Mark[i];
        if(0<=Mark[i]&&Mark[i]<=10)   ;
        else return 0;
    }    
    for(int i=0;i<=9;i++)    
    {
        if(Max<=Mark[i])   Max=Mark[i];
        if(Min>=Mark[i])   Min=Mark[i];
        sum=sum+Mark[i];
    }

    sum=sum-Max;
    sum=sum-Min;
    sum=sum/8;
    printf("%.3f",sum);
}    
