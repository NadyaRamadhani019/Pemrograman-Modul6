kode = input()
pesan = input()
kod = len(kode)
pes = len(pesan)
if kod != pes:
    print("Panjang kalimat berbeda, pesan palsu")
else:
    x=0
    y=0
    for i in range(len(kode)):
        if kode[i]==' ' and pesan[i]==' ':
            print(end=" ")
        elif kode[i]==pesan[i]:
            print("*", end=" ")
            x+=1
        else:
            print("#", end=" ")
            y+=1
    print(f"\n* = {x}")
    print(f"# = {y}")
    if x>=y:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")