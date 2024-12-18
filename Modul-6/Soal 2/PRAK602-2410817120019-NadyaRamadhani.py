ruang = int(input())
zetsu = list(map(int, input().split()))
for i in range(ruang):
    print(zetsu[i] * (i+1), end=" ")