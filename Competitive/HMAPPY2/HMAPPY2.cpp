/*Made by: Ankit Dwivedi
  February challange 2019 */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test;
    long long K,N,A,B,R;
    cin>> test;
    while(test--)// your code goes here
    {
        cin>> N >> A >> B >> K;
        R = (N/A)+(N/B)-2*(N/((A*B)/__gcd(B , A)));
        if(R < K) cout<< "Lose"<<endl;
        else cout << "Win" << endl;
    }
	return 0;
}
