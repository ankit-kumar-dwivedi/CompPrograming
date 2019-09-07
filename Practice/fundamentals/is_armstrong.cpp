

// Take the following as input.

// A number
// Write a function which returns true if the number is an armstrong number and false 
// otherwise, where armstrong number is defined as follows

// 371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
// Print the value returned.
// Input Format

// Integer
// Constraints

// 0 < N < 1000000000
// Output Format

// Boolean
// Sample Input

// 371

// Sample Output

// true

 #include<iostream>
 #include<math.h>
 using namespace std;
 
 bool is_armstrong(int number)
 {
     int n = number;
     int digit;
     int sum=0;
     while(n>0)
     {
         digit = n%10;
         sum+= pow(digit,3);
         n = n/10;
     }
     if(sum == number) return true;
     else return false;
 }
 int main()
 {
     int n;
     cin>>n;
     if(is_armstrong(n))
     {
         cout<<"true\n";
     }
     else
     {
         cout<<"false\n";
     }
     
     return 0;
 }
