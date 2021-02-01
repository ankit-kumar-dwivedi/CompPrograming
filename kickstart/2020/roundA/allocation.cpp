// Problem url - https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3f56
// Author - Ankit Dwivedi (dwivedi.ankit21@gmail.com)
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


void solve() {
    long n, dollars;
    cin>>n>>dollars;
    vector<long> houses(n);
    for (long i=0; i<n; ++i) {
        cin>>houses[i];
    }
    // sort based on prices
    sort(houses.begin(),houses.end());
    long spend = 0;
    long ans = 0;
    bool flag = true;
    int i=0;
    while(spend<dollars and flag and i<n) {
        if(houses[i]<=(dollars - spend)) {
            spend +=houses[i];
            ans +=1;
            i++;
        }
        if (i<n and houses[i]> dollars - spend) {
            flag = false;
        } 
    }
    cout<<ans<<"\n";
    
}

int main() {
    int test;
    cin>>test;
    for(int i=0; i<test; ++i) {
        cout<<"Case #"<<i+1<<": ";
        solve();
    }
    return 0;
}
