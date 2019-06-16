# cook your dish here
from fractions import Fraction
import math 

def fast_power(base, power):
    """
    Returns the result of a^b i.e. a**b
    We assume that a >= 1 and b >= 0

    Remember two things!
     - Divide power by 2 and multiply base to itself (if the power is even)
     - Decrement power by 1 to make it even and then follow the first step
    """

    result = 1
    while power > 0:
        # If power is even
        if power % 2 == 0:
            # Divide the power by 2
            power = power / 2
            # Multiply base to itself
            base = base * base
        else:
            # Decrement the power by 1 and make it even
            power = power - 1
            # Take care of the extra value that we took out
            # We will store it directly in result
            result = result * base

            # Now power is even, so we can follow our previous procedure
            power = power / 2
            base = base * base

    return result



def modInverse(a, m) :
    return power(a, m - 2, m) 
	
# To compute x^y under modulo m 
def power(x, y, m) : 
	
	if (y == 0) : 
		return 1
		
	p = power(x, y // 2, m) % m 
	p = (p * p) % m 

	if(y % 2 == 0) : 
		return p 
	else : 
		return ((x * p) % m)
	
mod = 1000000007

T = int(input())
while T > 0:
    n,k,m=list(map(int,input().split()))
    r=m-int(m/2)
    #print(r)
    if(m&1):
	    # print ("Odd")
	    #print(Fraction(int(pow(n, r)- pow(n-1, r)),int(pow(n, r))))
	    p1 = fast_power(n, r)
	    p2 = fast_power(n-1, r)
	    P = Fraction(p1 - p2,p1).numerator
	    Q = Fraction(p1 - p2,p1).denominator
	    print((P * modInverse(Q, mod))%mod)
    else:
	    # print ("Even")
	    #print(Fraction(int(pow(n, r)- pow(n-1, r)),int(pow(n, r)))+ Fraction(int(pow(n-1,r)),int(pow(n,r)*(n+k))))
	    p1 = fast_power(n, r)
	    p2 = fast_power(n-1, r)
	    P = (Fraction(p1- p2 ,p1 )+ Fraction(p2, p1*(n+k))).numerator
	    Q = (Fraction(p1- p2 ,p1 )+ Fraction(p2, p1*(n+k))).denominator
	    print((P * modInverse(Q, mod))%mod)
	    
    T=T-1