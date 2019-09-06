

// Due to growing Traffic Problem Kejriwal wants to devise a new scheme. The scheme is as follows,
// each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 
// or sum of digits which are odd in that number is divisible by 3. However to check every car for 
// the above criteria can't be done by the Delhi Police. You need to help Delhi Police by finding 
// out if a car numbered N will be allowed to run on Sunday?
// Input Format

// The first line contains N , then N integers follow each denoting the number of the car.
// Constraints

// N<=1000 Car No >=0 && Car No <=1000000000
// Output Format

// N lines each denoting "Yes" or "No" depending upon whether that car will be allowed on Sunday 
// or Not !
// Sample Input

// 2
// 12345
// 12134

// Sample Output

// Yes
// No

#include<iostream>
using namespace std;
void delhioddeven(long num)
{
    int esum=0,osum=0;
    while(num>0)
    {
        if((num%10) & 1)
        {
            osum +=num%10;
        }
        else
        {
            esum +=num%10;
        }
        
        num /=10;
    }
    if(esum%4==0)
    {
        cout<<"Yes\n";
    }
    else if(osum%3==0)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}
int main()
{
    int n;
    long number;
    cin>>n;
    while(n--)
    {
        cin>>number;
        delhioddeven(number);
    }
    return 0;
}