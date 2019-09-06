

// Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".
// Input Format

// Constraints

// 2 < N <= 1000000000
// Output Format

// Sample Input

// 3

// Sample Output

// Prime


#include<iostream>
using namespace std;
#define ll long long

ll binpower(ll base, ll e, ll mod) 
{
    ll result = 1;
    base %= mod;
    while (e) 
    {
        if (e & 1)
            result = result * base % mod;
        base = base * base % mod;
        e >>= 1;
    }
    return result;
}

bool check_composite(ll n, ll a, ll d, int s) 
{
    ll x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) 
    {
        x = x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};
bool MillerRabin(ll n) 
{ // returns true if n is prime, else returns false.
    if (n < 2)
        return false;

    int r = 0;
    ll d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        r++;
    }

    for (auto a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) 
    {
        if (n == a)
            return true;
        if (check_composite(n, a, d, r))
            return false;
    }
    return true;
}

int main()
{
    ll num;
    cin>>num;
    if(MillerRabin(num))
    {
        cout<<"Prime\n";
    }
    else
    {
        cout<<"Not Prime\n";
    }
    
    return 0;
}