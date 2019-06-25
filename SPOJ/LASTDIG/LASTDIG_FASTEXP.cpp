/*
*   Problem - https://www.spoj.com/problems/LASTDIG/
*   Username - ankit_dwivedi
*   Submitted on - 25 June 2019
*/
#include <iostream>
using namespace std;
long long binpow(long long a, long long b, long long m) 
{
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    int test;
    long long a,b;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        if(a==1 || b ==0)
        {
            cout<<"1\n";
        }
        else if(!a)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<binpow(a,b,10)<<"\n";
        }
    
    }
    return 0;
}
