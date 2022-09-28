#include <iostream>
using namespace std;

int main ()
{
    float tugas, uts, uas, nilai_anda;
    char nilai_huruf;
    string predikat, nama;

    cout << "Program Menghitung Nilai Akhir Mahasiswa" << endl;
    cout << "----------------------------------------" << endl;

    cout << "Masukkan Nama Anda : ";
    cin >> nama;

    cout << "Masukkan Nilai Tugas : ";
    cin >> tugas;

    cout << "Masukkan Nilai UTS : ";
    cin >> uts;

    cout << "Masukkan Nilai UAS : ";
    cin >> uas;

    nilai_anda = ((tugas) + (uts) + (uas))/3;

    if (nilai_anda > 80){
        nilai_huruf='A';
        predikat="Sangat Baik";
    }else if (nilai_anda > 60){
        nilai_huruf='B';
        predikat="Baik";
    }else if (nilai_anda > 40){
        nilai_huruf='C';
        predikat="Cukup";
    }else if (nilai_anda > 20){
        nilai_huruf='D';
        predikat="Kurang";
    }else {
        nilai_huruf='E';
        predikat="Sangat Kurang";
    }
    cout << endl;
    cout << "Selamat " << nama << endl;
    cout << "Nilai Anda : " << nilai_anda << endl;
    cout << "Nilai Huruf : " << nilai_huruf << endl;
    cout << "Predikat : " << predikat << endl;

    return 0;
}