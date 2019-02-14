/*Made by: Ankit Dwivedi
  February challange 2019 */
#define Mod 1000000007
#define ll long long int
#include<bits/stdc++.h>
using namespace std;
ll mod_inverse(ll n,ll p){
        ll res=1;
        n=n%Mod;
        while(p>0){
            if(p&1!=0){
                res=res*n%Mod;
                }
            p=p>>1;
            n=n*n%Mod;
            }
        return res;
    }
ll comp(ll n){
    return mod_inverse(n,Mod-2);
    } 
ll fast_exp(ll base, 
                        ll exp) 
{ 
    if (exp == 0) 
        return 1; 
  
    if (exp == 1) 
        return base % Mod; 
  
    ll t = fast_exp(base, exp / 2); 
    t = (t * t) % Mod; 
  
    // if exponent is even value 
    if (exp % 2 == 0) 
        return t; 
  
    // if exponent is odd value 
    else
        return ((base % Mod) * t) % Mod; 
} 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,m,r;
        cin>>n>>k>>m;
        r=m-(ll)m/2;
        if(m&1){
            
            ll p1=fast_exp(n,r);  //Denominator
            ll p2=fast_exp(n-1,r);
         
            ll num=(p1-p2+Mod)%Mod;//magic happens here
           // cout<<p1<<" "<<p2<<" "<<num<<endl;
            cout<<((num%Mod)*(comp(p1))%Mod)%Mod<<endl;       
            
        }
        else{
            ll p1=fast_exp(n,r);
            ll p2=fast_exp(n-1,r);
            ll x=n+k;
            ll num=((x*p1)+(1-x+Mod)*p2)%Mod;//magic here
            ll den=(x*p1)%Mod;
           // cout<<p1<<" "<<p2<<" "<<num<<" "<<den<<" "<<endl;
            cout<<((num%Mod)*(comp(den))%Mod)%Mod<<endl;
        }
    }
    return 0;
}