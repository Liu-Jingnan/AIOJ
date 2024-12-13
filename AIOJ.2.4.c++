#include <iostream>
#include <iomanip>
using namespace std ;

int main()
{
    long double pi=0.0,dpi=1.0,sign=1;
    while(1.0/dpi >= 1e-6)
    {
        
        pi +=  4.0/(sign*dpi);
        dpi += 2;
        sign *= -1;
    }
    printf("%.8Lf  ",pi);
   

	
	long double n, a = 1, b = -1, i ;
    pi = 0.0;
	for (n = 1; 1/ (a+2) >= 1e-6; n++)
	{
		a = 2 * n - 1;
		b = -1 * b;
		i = b / a;
		pi += 4 * i;
	}
	cout << fixed << setprecision(8) << pi;

}