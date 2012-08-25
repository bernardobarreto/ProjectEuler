def find_chain_size(number):
    counter = 0
    while number != 1:
        if number % 2 == 0:
            number = number / 2
        else:
            number = number * 3 + 1
        counter += 1
    return counter

def main():
    i = 13
    bigger = 0
    number = 0
    while i < 1000000:
        size = find_chain_size(i)
        print 'size %i' % size
        if size > bigger:
            bigger = size
            number = i
            print 'number %i' % number
        i += 1

    print '\n\n\n\n\n\n'
    print 'number %i' % number
    print 'size %i' % bigger

main()
