#include <bitset>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    cout << boolalpha;

    /*
    LATIHAN SOAL PRAKTIKUM - BAGIAN A

    Nomor 1:
    Diketahui int a = 15, b = 4. Tentukan hasil dari a / b,
    a % b, (double)a / b, dan a * b - a % b.

    Jawaban:
    a / b = 3
    a % b = 3
    (double)a / b = 3.75
    a * b - a % b = 57
    */
    int a = 15, b = 4;
    cout << "=== BAGIAN A NOMOR 1 ===" << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "(double)a / b = " << static_cast<double>(a) / b << endl;
    cout << "a * b - a % b = " << a * b - a % b << endl;

    /*
    Nomor 2:
    Diketahui int x = 10. Jalankan berurutan:
    x += 5; x *= 2; x -= 4; x /= 3; x %= 5.
    Berapa nilai akhir x?

    Jawaban:
    10 -> 15 -> 30 -> 26 -> 8 -> 3.
    Nilai akhir x = 3.
    */
    int x = 10;
    x += 5;
    x *= 2;
    x -= 4;
    x /= 3;
    x %= 5;
    cout << "\n=== BAGIAN A NOMOR 2 ===" << endl;
    cout << "Nilai akhir x = " << x << endl;

    /*
    Nomor 3:
    Diketahui int a = 5, b = 3, lalu int c = a++ + ++b.
    Tentukan nilai a, b, dan c setelahnya.

    Jawaban:
    a++ memakai 5, lalu a menjadi 6.
    ++b membuat b menjadi 4 sebelum digunakan.
    c = 5 + 4 = 9.
    */
    a = 5;
    b = 3;
    int c = a++ + ++b;
    cout << "\n=== BAGIAN A NOMOR 3 ===" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    /*
    Nomor 4:
    Tentukan hasil true/false:
    (a) (7 > 3) && (4 == 5)
    (b) (7 > 3) || (4 == 5)
    (c) !(2 < 1) && (6 % 2 == 0)

    Jawaban:
    (a) false
    (b) true
    (c) true
    */
    cout << "\n=== BAGIAN A NOMOR 4 ===" << endl;
    cout << "(a) " << ((7 > 3) && (4 == 5)) << endl;
    cout << "(b) " << ((7 > 3) || (4 == 5)) << endl;
    cout << "(c) " << (!(2 < 1) && (6 % 2 == 0)) << endl;

    /*
    Nomor 5:
    Tuliskan bentuk biner 8 bit dari 25 dan 9, lalu hitung:
    25 & 9, 25 | 9, 25 ^ 9, 25 << 2, dan 9 >> 1.

    Jawaban:
    25 = 00011001
    9  = 00001001
    25 & 9 = 9
    25 | 9 = 25
    25 ^ 9 = 16
    25 << 2 = 100
    9 >> 1 = 4
    */
    a = 25;
    b = 9;
    cout << "\n=== BAGIAN A NOMOR 5 ===" << endl;
    cout << "25 = " << bitset<8>(a) << endl;
    cout << "9 = " << bitset<8>(b) << endl;
    cout << "25 & 9 = " << (a & b) << endl;
    cout << "25 | 9 = " << (a | b) << endl;
    cout << "25 ^ 9 = " << (a ^ b) << endl;
    cout << "25 << 2 = " << (a << 2) << endl;
    cout << "9 >> 1 = " << (b >> 1) << endl;

    /*
    LATIHAN SOAL PRAKTIKUM - BAGIAN B

    Nomor 1 - Kalkulator Mini:
    Masukkan dua bilangan bulat. Tampilkan penjumlahan, pengurangan,
    perkalian, pembagian hasil desimal, dan sisa bagi.

    Jawaban contoh input 17 dan 5:
    22, 12, 85, 3.4, 2.
    */
    cout << "\n=== BAGIAN B NOMOR 1 ===" << endl;
    a = 17;
    b = 5;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << static_cast<double>(a) / b << endl;
    cout << a << " % " << b << " = " << a % b << endl;

    /*
    Nomor 2 - Konversi Suhu:
    Masukkan suhu Celsius. Tampilkan Fahrenheit dan Reamur.
    F = C * 9 / 5 + 32
    R = C * 4 / 5

    Jawaban contoh C = 25:
    Fahrenheit = 77.00 dan Reamur = 20.00.
    */
    cout << "\n=== BAGIAN B NOMOR 2 ===" << endl;
    double celsius = 25;
    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    double reamur = celsius * 4.0 / 5.0;
    cout << fixed << setprecision(2);
    cout << "Fahrenheit = " << fahrenheit << endl;
    cout << "Reamur = " << reamur << endl;

    /*
    Nomor 3 - Konversi Detik:
    Masukkan total detik. Tampilkan dalam format jam, menit, detik.

    Jawaban contoh 3725 detik:
    1 jam 2 menit 5 detik.
    */
    cout << "\n=== BAGIAN B NOMOR 3 ===" << endl;
    int total = 3725;
    int jam = total / 3600;
    int sisa = total % 3600;
    int menit = sisa / 60;
    int detik = sisa % 60;
    cout << jam << " jam " << menit << " menit " << detik << " detik" << endl;

    /*
    Nomor 4 - Tabungan:
    Saldo awal 1.000.000. Tambah gaji 2.500.000 dengan +=,
    kurangi belanja 750.000 dengan -=, lalu beri bunga 5%
    dengan *= 1.05. Tampilkan saldo setiap langkah.

    Jawaban:
    Saldo awal = 1.000.000,00
    Setelah gaji = 3.500.000,00
    Setelah belanja = 2.750.000,00
    Setelah bunga = 2.887.500,00
    */
    cout << "\n=== BAGIAN B NOMOR 4 ===" << endl;
    double saldo = 1000000.0;
    cout << "Saldo awal = " << saldo << endl;
    saldo += 2500000.0;
    cout << "Setelah gaji = " << saldo << endl;
    saldo -= 750000.0;
    cout << "Setelah belanja = " << saldo << endl;
    saldo *= 1.05;
    cout << "Setelah bunga = " << saldo << endl;

    /*
    Nomor 5 - Status Nilai:
    Masukkan nilai ujian. Tampilkan lulus jika nilai >= 60,
    nilai sempurna jika nilai == 100, dan remedial jika nilai < 60.

    Jawaban contoh nilai 82:
    Lulus = true, sempurna = false, remedial = false.
    */
    cout << "\n=== BAGIAN B NOMOR 5 ===" << endl;
    int nilai = 82;
    cout << "Lulus = " << (nilai >= 60) << endl;
    cout << "Nilai sempurna = " << (nilai == 100) << endl;
    cout << "Perlu remedial = " << (nilai < 60) << endl;

    /*
    Nomor 6 - Kelayakan Beasiswa:
    Masukkan IPK, penghasilan orang tua, dan status prestasi.
    Mahasiswa layak jika IPK >= 3,5 dan penghasilan <= 5.000.000,
    atau memiliki prestasi.

    Jawaban contoh IPK 3,7, penghasilan 6.000.000, prestasi 1:
    Layak menerima beasiswa = true.
    */
    cout << "\n=== BAGIAN B NOMOR 6 ===" << endl;
    double ipk = 3.7;
    int penghasilan = 6000000;
    int prestasi = 1;
    bool layak = (ipk >= 3.5 && penghasilan <= 5000000) || prestasi == 1;
    cout << "Layak menerima beasiswa = " << layak << endl;

    return 0;
}
