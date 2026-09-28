# Contoh Dasar C++, Java, dan Python

Tiap bahasa memiliki satu program kecil yang berfokus pada konsep dasar:

- C++ mengubah suhu Celsius ke Fahrenheit.
- Java memeriksa apakah nilai siswa lulus.
- Python melakukan satu operasi kalkulator.

## Isi Folder

- `c++/Program C++.cpp`
- `java/Penilaian.java`
- `python/Kalkulator.py`

## Persiapan

Jalankan perintah dari folder utama proyek. Pastikan compiler `g++`, JDK (`javac` dan `java`), serta Python 3 sudah terpasang.

## C++: Konversi Suhu

Jalankan:

```powershell
g++ "c++\Program C++.cpp" -o konversi.exe
.\konversi.exe
```

Program membaca suhu Celsius, menghitung Fahrenheit dengan rumus `F = (C x 9 / 5) + 32`, lalu menampilkan hasil.

- `#include <iostream>` memuat fasilitas input dan output.
- `int main()` adalah tempat program mulai berjalan.
- `double` menyimpan angka desimal, seperti suhu.
- `std::cin >> celsius` membaca input; `std::cout << ...` menampilkan hasil.
- `fahrenheit = ...` menyimpan hasil perhitungan ke variabel.

Contoh: masukkan `25`, hasilnya `77` derajat Fahrenheit.

## Java: Cek Kelulusan

Jalankan:

```powershell
javac java\Penilaian.java
java -cp java Penilaian
```

Program menerima nilai. Nilai minimal 75 dinyatakan lulus.

- `import java.util.Scanner;` menyiapkan alat untuk membaca input.
- `public class Penilaian` adalah class utama. Nama class publik sama dengan nama file `Penilaian.java`.
- `main` adalah titik awal program Java.
- `int nilai` membuat variabel bilangan bulat, lalu `input.nextInt()` membaca nilainya.
- `if` memeriksa kondisi. `else` dijalankan jika kondisi tersebut tidak terpenuhi.
- `System.out.println()` menampilkan pesan.

Contoh: masukkan `80`, hasilnya `Lulus`; masukkan `60`, hasilnya `Belum lulus`.

## Python: Kalkulator

Jalankan:

```powershell
python python\Kalkulator.py
```

Program meminta dua angka dan satu operasi: `+`, `-`, `*`, atau `/`. Program hanya menghitung satu kali setiap dijalankan.

- `input()` membaca teks dari keyboard; `float(...)` mengubahnya menjadi angka desimal.
- `if`, `elif`, dan `else` memilih perhitungan berdasarkan operator.
- Indentasi (spasi di awal baris) menandai baris yang menjadi bagian dari kondisi.
- `==` membandingkan nilai. Kondisi `angka_kedua == 0` mencegah pembagian dengan nol.
- `print()` menampilkan hasil.

Contoh: masukkan `4`, lalu `*`, lalu `2`; hasilnya `8.0`.