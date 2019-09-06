/*
*   Problem - https://www.spoj.com/problems/ZSUM/
*   Username - ankit_dwivedi
*   Submitted on - 6 September 2019
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll powermod(ll a,ll b)
{
    a%=10000007;
    ll res =1;
    while(b>0)
    {
        if(b&1) res = res * a % 10000007;
        a = a*a % 10000007;
        b>>=1;
    }
    return res;
}

int main()
{
    ll n,k;
    while(true)
    {
        cin>>n>>k;
        if(n==k&&k==0) break;
        cout<<(2*(powermod(n-1,k) + powermod(n-1,n-1)) + powermod(n,k) + powermod(n,n))%10000007;
    
        cout<<"\n";
    }
}