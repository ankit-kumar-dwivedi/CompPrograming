/*Made by: Ankit Dwivedi
  February challange 2019 */
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std; 

const int MAX_CHAR = 26; 

void fun(string str[], int n) 
{ 
    vector <int> mapObject(MAX_CHAR,0);
    
	for (int i = 0; i < n; i++)
	{ 
		for (int j = 0; str[i][j]; j++)
		{ 
			if (mapObject[str[i][j]-'a']==i) 
				mapObject[str[i][j]-'a']=i+1; 
		} 
	}
	cout<<count(mapObject.begin(), mapObject.end(),n)<<"\n";
} 

int main() 
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,test;
    cin >> test;
    while (test--)
    {
        cin >> N;
	    string str[N];
	    for (int i = 0; i < N; i++)
        {
            cin >> str[i];
        }
	    fun(str, N); 
    }
	return 0; 
} 
