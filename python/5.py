atual=2520

def eh_resposta(number):
    for i in xrange(2,21):
        if number % i != 0:
            return False
    return True

while not eh_resposta(atual):
    atual += 1

print(atual)
