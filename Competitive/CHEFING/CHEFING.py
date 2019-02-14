# cook your dish here
T = int(input())

while T > 0:
    U = set("abcdefghijklmnopqrstuvwxyz")
    n = int(input())
    for i in range(n):
        s = set(input())
        U = s & U
    print(len(U))
    T=T-1