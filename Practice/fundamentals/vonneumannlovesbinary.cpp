

// Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.
// Input Format

// The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.
// Constraints

// N<=1000 Digits in binary representation is <=16.
// Output Format

// N lines,each containing a decimal equivalent of the binary number.
// Sample Input

// 4
// 101
// 1111
// 00110
// 111111

// Sample Output

// 5
// 15
// 6
// 63

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int binarytodec(string bin)
{
    int num =0;
    for (int pos =0;pos < bin.length(); pos++)
    {
        num = num + (bin[pos]-'0')*pow(2,bin.length()-pos-1);
    }
    
    return num;
}
int main()
{
    string binary;
    int test;
	cin>>test;
    while(test--)
    {
        cin>>binary;
        cout<<binarytodec(binary)<<"\n";
    }
    return 0;
}