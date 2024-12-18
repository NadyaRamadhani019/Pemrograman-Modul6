n1, n2 = map(int, input().split())
if n1 != n2:
    print("Jumlah tidak sama")
else:
    baris1 = list(map(int, input().split()))
    baris2 = list(map(int, input().split()))
    for i in range(n1):
        print(baris1[i] * baris2[i], end=" ")