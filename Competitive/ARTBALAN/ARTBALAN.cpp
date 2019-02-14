/*Made by: Ankit Dwivedi
  February challange 2019 */
#include <bits/stdc++.h>

using namespace std;


long findmoves(long len, vector < long > vlongs,long m, long n)
{
        long avg = len / n; 
        long moves = 0;

        if (n == m) 
		{ 
            for (auto occur : vlongs)
			{
                if (occur <= avg)
				{
					break;
				}
                moves += (occur - avg);
            }
        }
		else if (n < m)
		{ 
            for (long i = 0; i < n; i++) moves += abs(vlongs[i] - avg); // for elements kept,
            for (long i = n; i < m; i++) moves += vlongs[i]; // for elements to replace,
            moves >>= 1;
        } 
		else
		{ 
            for (long i = 0; i < vlongs.size(); i++) moves += abs(vlongs[i] - avg); 
            moves += ((n - m) * avg); 
            moves >>= 1;
        }

        return moves;
    }


int main()
{
	long test;
	cin>>test;
	while(test--)
	{
		string s;// = "abcdefghijklmnopqrstuvawxyz";	
		cin>>s;
		map < char, long > mp; 
		vector < long > vlongs;
		for ( long i = 0; i < s.size(); i++ ) // chars in the string
		{
			mp[ s[i] ] ++; 
		}
		for(auto const& elem: mp)
			vlongs.push_back(elem.second);

		sort(vlongs.rbegin(), vlongs.rend());
		long maxN = (s.size() < 26 ? s.size() : 26); 
		long len = s.size();
		long m = mp.size();
		long minmoves = 92233720368547758;
		for (long n = 1; n <= maxN; n++) 
		{
			if (len % n == 0)
			{
				long moves = findmoves(len, vlongs, m, n);
				if (moves < minmoves) minmoves = moves;
			}
		}

		cout<< minmoves<<endl;

	}
	return 0;
}