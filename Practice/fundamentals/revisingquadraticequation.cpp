// Given coefficients of a quadratic equation , you need to print the 
// nature of the roots (real and distinct , real and equal , imaginary).
// Input Format

// First contains three coefficients a,b,c from the equation ax^2 + bx + c = 0.
// Constraints

// -100 <= a, b, c <= 100
// Output Format

// Output contains one/two lines.First line contains nature of the roots .
// The next line contains roots separated by a space if they exist. If roots are 
// imaginary do not print the roots.
// Sample Input

// 1 -11 28

// Sample Output

// Real and Distinct
// 4 7

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int D = (b*b) - (4*a*c);
    if(D<0)
    {
        cout<<"Imaginary\n";
    }
    else 
    {
        int r1 = (-b - sqrt(D))/2*a;
        int r2 = (-b + sqrt(D))/2*a;
        if(D>0)
        {
            cout<<"Real and Distinct\n";
            cout<<r1<<" "<<r2<<"\n";
        }
        if(D==0)
        {
            cout<<"Real and Equal\n";
            cout<<r1<<" "<<r2<<"\n";
        }
    
    }
    return 0;
}
