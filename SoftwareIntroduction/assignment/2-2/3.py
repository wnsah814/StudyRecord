print("x:")
x = int(input())
print("*a:")
a = int(input())
print("/b:")
b = int(input())
print("+c:")
c = int(input())
print("-d:")
d = int(input())

ans = x*a/b+c-d

print("%d * %d / %d + %d – %d = %.1f" % (x,a,b,c,d,ans))