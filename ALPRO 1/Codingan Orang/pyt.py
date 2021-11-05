 n = int(input('masukkan n :'))

for i in range (1,n + 1):
    if i == 1 or i == n:
        x = n * '*'
        print(x)
    else:
        z = (n-2) * '#'
        print("{}".format(z))