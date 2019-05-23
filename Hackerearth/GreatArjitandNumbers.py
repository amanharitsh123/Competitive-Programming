mod = 1000000007


def summation(x):
	t = (x % mod * (x + 1) % mod) % mod
	t = (t%mod*inverse(2)%mod)%mod
	return t

def gcd(a,b):
	if b==0:
		return (1,0)
	tup=gcd(b,a%b)
	y=tup[0]-(a//b)*tup[1]
	x=tup[1]
	return (x,y)

def inverse(x):
	ans=gcd(x,mod)
	return (ans[0]%mod + mod)%mod

def solve(x,y):
	return (x%mod*inverse(y)%mod)%mod

for _ in range(int(input())):
# 	print("inc is ",inverse(2))
	n = int(input())
	arr = list(map(int, input().split()))
	f = 0
	for i in range(1, n):
		val=solve(arr[i],arr[i-1])
		f += summation(val)
	print(int(summation(f)) %mod)

'''
Arr
F
q
1
3
1 2 4
'''