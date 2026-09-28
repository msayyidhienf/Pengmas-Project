# Contoh Program Dasar C++, Java, dan Python

Repositori ini berisi empat program kecil untuk latihan input, pengolahan data,
percabangan, dan output. Jalankan perintah dari folder utama proyek.

## Isi Folder

- `program1/Main.java`: penilaian dan status kelulusan siswa.
- `program2/Program C++.cpp`: konversi suhu Celsius, Kelvin, dan Fahrenheit.
- `program3/Kalkulator.py`: kalkulator untuk operasi dasar.
- `program3/Luas_Persegi_Panjang.py`: menghitung luas persegi panjang.

## Persiapan

- C++: pasang compiler `g++`.
- Java: pasang JDK yang menyediakan `javac` dan `java`.
- Python: pasang Python 3.

Pastikan perintah tersebut tersedia di terminal. Pada Windows, gunakan `py`
jika perintah `python` tidak dikenali.

## C++: Konversi Suhu

Kompilasi dan jalankan di PowerShell:

```powershell
g++ "program2\Program C++.cpp" -o "program2\konversi_suhu.exe"
.\program2\konversi_suhu.exe
```

Pilih satuan asal dan tujuan: `1` untuk Celsius, `2` untuk Kelvin, atau `3`
untuk Fahrenheit. Semua arah konversi tersedia. Program menolak pilihan atau
input suhu yang tidak valid serta suhu di bawah nol mutlak.

Contoh: pilih `1`, lalu `3`, kemudian masukkan `25`. Hasilnya
`25 Celsius = 77 Fahrenheit`.

Konsep utama:

- `int` menyimpan nomor pilihan dan `double` menyimpan suhu desimal.
- `std::cin` membaca input; `std::cout` menampilkan informasi.
- `if` dan `else if` memilih perhitungan berdasarkan satuan.
- Suhu dikonversi ke Celsius terlebih dahulu sebelum dihitung ke satuan tujuan.

## Java: Penilaian Siswa

Kompilasi dan jalankan dari folder utama:

```powershell
javac program1\Main.java
java program1.Main
```

Masukkan nilai bulat dari `0` sampai `100`. Predikat A diberikan untuk nilai
90 ke atas, B untuk 80-89, C untuk 75-79, D untuk 60-74, dan E untuk nilai di
bawah 60. Nilai minimal 75 dinyatakan lulus.

Contoh: nilai `85` menghasilkan predikat `B` dan status `Lulus`.

Konsep utama:

- `Scanner` membaca input dari keyboard dan `int` menyimpan nilai bulat.
- `if`, `else if`, dan `else` menentukan predikat dari rentang nilai.
- Program memeriksa jenis input dan rentangnya sebelum mengolah nilai.
- `System.out.println()` dan `System.out.printf()` menampilkan hasil.

## Python: Kalkulator

Jalankan:

```powershell
python program3\Kalkulator.py
```

Masukkan angka pertama, operator (`+`, `-`, `*`, atau `/`), lalu angka kedua.
Program melakukan satu operasi setiap kali dijalankan dan menolak pembagian
dengan nol.

Contoh: masukkan `4`, `*`, dan `2`; hasilnya `8.0`.

Konsep utama:

- `input()` membaca masukan sebagai teks; `float()` mengubahnya menjadi angka.
- Variabel menyimpan angka, operator, dan hasil perhitungan.
- `if`, `elif`, dan `else` memilih operasi yang akan dilakukan.
- Indentasi menunjukkan baris yang berada di dalam suatu kondisi.
- `print()` menampilkan hasil atau pesan kesalahan.

## Python: Luas Persegi Panjang

Jalankan:

```powershell
python program3\Luas_Persegi_Panjang.py
```

Masukkan panjang dan lebar dalam sentimeter. Program mengalikan keduanya
dengan rumus `luas = panjang x lebar` dan menampilkan hasil dalam sentimeter
persegi (`cm^2`).

Contoh: panjang `5` cm dan lebar `3` cm menghasilkan `15.0 cm^2`.

Konsep utama:

- `input()` meminta data dari pengguna.
- `float()` menerima angka bulat maupun desimal.
- Operator `*` mengalikan panjang dengan lebar.
- `print()` menampilkan hasil perhitungan.