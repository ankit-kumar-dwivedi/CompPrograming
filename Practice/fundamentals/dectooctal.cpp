

// Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.
// Input Format

// Constraints

// 0 < N <= 1000000000
// Output Format

// Sample Input

// 63

// Sample Output

// 77

#include<iostream>
#include<string>
using namespace std;
string dectooctal(int decimal)
{
    string octal="";
    while(decimal>0)
    {
        octal = to_string(decimal%8) + octal;
        decimal = decimal/8;
    }
    return octal;
}
int main()
{
    int decimal;
    cin>>decimal;
    cout<<dectooctal(decimal)<<"\n";
    return 0;
}
