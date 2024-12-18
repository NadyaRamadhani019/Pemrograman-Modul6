baris, kolom = map(int, input().split())
elemen = list(map(int, input().split()))
matriks = []
index = 0
for i in range(baris):
    matriks.append(elemen[index:index+kolom])
    index += kolom
for baris in matriks:
    for elemen in baris:
        print(elemen, end=" ")
    print()