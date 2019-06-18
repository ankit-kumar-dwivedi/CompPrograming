/*
 Author     : Ankit Kumar Dwivedi
 Institution: ASET Delhi
*/
#include <algorithm>
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("leapfrog_ch_.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t,n;
    string str;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
        cin>>str;
        int dot = count(str.begin(),str.end(),'.');
        int b = count(str.begin(),str.end(),'B');
        if((dot&&b)&&((b>=2)||(b==1)&&(dot==1)))
        cout<<"Case #"<<i+1<<": Y\n";
        else
        {
                    cout<<"Case #"<<i+1<<": N\n";
        }
            
    }
    return 0;

}
