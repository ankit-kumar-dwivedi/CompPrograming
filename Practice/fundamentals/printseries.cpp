

// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.
// Input Format

// Constraints

// 0 < N1 < 100 0 < N2 < 100
// Output Format

// Sample Input

// 10 
// 4

// Sample Output

// 5 
// 11 
// 14 
// 17 
// 23 
// 26 
// 29 
// 35 
// 38 
// 41

#include<iostream>
using namespace std;
void printseries(int n1, int n2)
{
    int term = 1,count =0;
    while(count < n1)
    {
        if((3*term + 2) % n2!=0)
        {
            cout<<3*term + 2<<"\n";
            count++;
            term ++;
        }
        else
        {
            term ++;
        }
        
    }
} 
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    printseries(n1,n2);
    return 0;
}