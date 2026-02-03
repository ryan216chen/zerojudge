while True:
    try:
        n = int(input())
    except EOFError:
        break
    
    if n == 0:
        break
    
    cnt = 0
    while n != 0:
        r = n % 2
        if r != 1:
            break
        cnt += 1
        n >>= 1
    print(f'{cnt}')
