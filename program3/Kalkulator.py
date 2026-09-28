print("=== Kalkulator Sederhana ===")

angka_pertama = float(input("Masukkan angka pertama: "))
operator = input("Masukkan operasi (+, -, *, /): ")
angka_kedua = float(input("Masukkan angka kedua: "))

if operator == "+":
    hasil = angka_pertama + angka_kedua
    print("Hasil:", hasil)
elif operator == "-":
    hasil = angka_pertama - angka_kedua
    print("Hasil:", hasil)
elif operator == "*":
    hasil = angka_pertama * angka_kedua
    print("Hasil:", hasil)
elif operator == "/":
    if angka_kedua == 0:
        print("Tidak bisa membagi dengan nol.")
    else:
        hasil = angka_pertama / angka_kedua
        print("Hasil:", hasil)
else:
    print("Operasi tidak dikenal.")