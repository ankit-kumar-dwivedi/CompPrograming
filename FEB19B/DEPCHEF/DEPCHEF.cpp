/*Made by: Ankit Dwivedi
  February challange 2019 */

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int ans, test, N;
    cin >> test;
    while (test--)
    {
        cin >> N;
        int a[N],b[N],d[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> d[i];
        }
        b[0] = d[0] - a[1] - a[N-1];
        b[N-1] = d[N-1] - a[N-2] - a[0];
        for(int i = 1; i < N-1; i++)
        {
            b[i] = d[i] - a[i - 1] - a[i + 1];
            
        }
        ans = -1;
        for(int j = 0; j < N; j++)
        {
            //cout<< b[j] <<endl;
            if (b[j] > 0)
            {
                ans =max(ans,d[j]);
                //break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
