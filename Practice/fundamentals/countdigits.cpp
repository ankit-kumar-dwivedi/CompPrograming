

// Take the following as input.
// A number
// A digit
// Write a function that returns the number of times digit is found in the number. 
// Print the value returned.
// Input Format

// Integer (A number) Integer (A digit)
// Constraints

// 0 <= N <= 1000000000 0 <= Digit <= 9
// Output Format

// Integer (count of times digit occurs in the number)
// Sample Input

// 5433231 
// 3

// Sample Output

// 3


#include<iostream>
using namespace std;

void printoccurenece(int num,int digit)
{
    int count=0;
    while(num>0)
    {
        if(num%10==digit)
        count++;
        num/=10;
    }
    cout<<count<<"\n";
}
int main()
{
    long num,digit;
    cin>>num>>digit;
    printoccurenece(num,digit);
    
    return 0;
}
