def kaprekarNumbers(p, q):
    f = 1
    for i in range(p, q + 1):
        if i == 1 or i == 0:
            print(i, end=" ")
            f = 0
        if i > 3:
            d = len(str(i))
            a = str(i * i)
            l = a[:len(a)-d]
            r = a[len(a)-d:]
            if int(l) + int(r) == i:
                print(i, end=" ")
                f = 0
    if f:
        print("INVALID RANGE")
