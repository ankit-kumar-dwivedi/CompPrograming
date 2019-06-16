/*Made by: Ankit Dwivedi
  February challange 2019 */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
       vector <long long> a(n,0);
       for(auto& x : a )
       cin>>x;

       cout<< accumulate(a.begin(),a.end(),1-n )<<endl;
    }   
    
	// your code goes here
	return 0;
}
