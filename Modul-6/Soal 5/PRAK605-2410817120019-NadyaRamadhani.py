ordo = int(input())
print("Matriks A")
MatA = []
for i in range(ordo):
    matriks = list(map(int, input().split()))
    MatA.append(matriks)
print("Matriks B")
MatB = []
for i in range(ordo):
    matriks = list(map(int, input().split()))
    MatB.append(matriks)
print("Matriks AXB")
MatAXB = []
for i in range(ordo):
    MatAXB.append([])
    for j in range(ordo):
        hasil = 0
        for matriks in range(ordo):
            hasil += MatA[i][matriks] * MatB[matriks][j]
        MatAXB[i].append(hasil)
for baris in MatAXB:
    for matriks in baris:
        print(matriks, end=" ")
    print()