def nCr(n,r):
    if r==0 or n==r:
        return 1
    else:
        return nCr(n-1, r-1) + nCr(n-1, r)
n, r = map(int, input().split())

print(nCr(n, r))