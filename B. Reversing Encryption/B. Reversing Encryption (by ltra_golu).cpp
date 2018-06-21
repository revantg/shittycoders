n = int(input())
s = input()
divisors = []
for i in range(1, int(n**0.5)+1):
    if n % i == 0:
        divisors.append(i)
        divisors.append(n // i)
divisors = sorted(list(set(divisors)))

# print(divisors)
for i in divisors:
    # if i!=1:
    substr = s[0:i]
    s = ''.join(reversed(substr)) + s[i:]
    # print(s)
print(s)