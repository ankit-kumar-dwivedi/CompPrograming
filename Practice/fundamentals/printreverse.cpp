

// Take N as input, Calculate it's reverse also Print the reverse.
// Input Format

// Constraints

// 0 <= N <= 1000000000
// Output Format

// Sample Input

// 123456789

// Sample Output

// 987654321

#include<iostream>
using namespace std;
long reverse(long num)
{
    long reverse=0;
    while(num>0)
    {
        reverse = reverse*10 + num%10;
        num = num/10;
    }
    return reverse;
    
}
int main()
{
    long input;
    cin>>input;
    cout<<reverse(input)<<"\n";
    return 0;
}
