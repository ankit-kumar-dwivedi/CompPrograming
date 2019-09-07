/*
*   Problem - http://codeforces.com/problemset/problem/630/I
*   Username - ankit_dwivedi
*   Submitted on - 7 September 2019
*/
#include<iostream>
using namespace std;
#define ll long long

ll fastpow(ll a, ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res = res*a;
        a = a*a;
        b>>=1;
    }
    return res;
}

int main()
{
    ll input;
    cin>>input;
    ll temp = fastpow(4,input-3);
    cout<<2*4*3*temp + (input - 3)*9*temp;
    return 0;
}