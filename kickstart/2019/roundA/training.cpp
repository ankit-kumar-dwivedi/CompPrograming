/*
*   problem - https://codingcompetitions.withgoogle.com/kickstart/round/0000000000050e01/00000000000698d6
*   Author - Ankit Dwivedi
*   Submitted on - 21/4/2020
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	long test;

	cin>>test;
	for (long t = 0; t < test; t++) {
	    
		long N, window_size;
		cin>> N >> window_size;

		vector<long> v(N);
		for (long x = 0; x < N; ++x)
		{
			cin>>v[x];
		}
        sort(v.begin(), v.end());
        long sum = accumulate(v.begin(),v.begin()+window_size,0.0);
        long curr_max = v[window_size-1];
        long min = (window_size * curr_max) - sum;
        for(long i = window_size;i<N;++i){
            sum = sum - v[i-window_size] + v[i];
            if(v[i]>curr_max){
                curr_max = v[i];
            }
            if((window_size*curr_max - sum)<min){
                min = (window_size*curr_max - sum);
            }
        }
        cout<<"Case #"<<t+1<<": "<<min<<"\n";
	}	

    return 0;
}
