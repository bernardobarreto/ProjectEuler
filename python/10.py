sum = 0
num = 0

def is_prime(num):
    for i in xrange(2,num/2+1):
        if num % i == 0:
            return False
    return True

while num < 2000000:
    num += 1
    if is_prime(num): 
	sum += num

print sum-1
